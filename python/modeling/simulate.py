#==========================================================================================================================
#===================================================  SIMULATION TOOL  ==================================================
#==========================================================================================================================


###########################################
# IMPORT PACKAGES
#

import numpy as np
import os
import sys
from datetime import datetime
import pprint
import matplotlib.pyplot as plt
from scipy.integrate import odeint
from bson.objectid import ObjectId 
import math


###########################################
# CONNECTION WITH DATABASE
#

from pymongo import MongoClient
client = MongoClient('localhost', 27017)
db = client.printeria

###########################################

promoters = db.promoters
rbsses = db.rbsses
cdsses = db.cdsses
terminators = db.terminators

argString = sys.argv[1]
argArray = argString.split(",")
pID = argArray[0];
rID = argArray[1];
cID = argArray[2];
tID = argArray[3];



###########################################
# RETRIEVE TEST PARTS

# print("VA??")
# promotr = promoters.find({"_id" : str(promName)}, {"name" : 0})
# result = db.col.find({"some": "condition"}, {"name": 0})
# print([document["name"] for document in result])
# print("NO VA")
#print("PROMOTRRRRRR: ")
#print(promotr)

#db.test.find({"_id" : ObjectId("4ecc05e55dd98a436ddcc47c")})


#quant = promoters.find_one({"name": "p1"})['quantity']
#print("QUQQQQQQAAAANT: ")
#print(quant)


promPy = [i for i in promoters.find({"name": "promPy"})]
cdsPy = [i for i in cdsses.find({"name": "cdsPy"})]


# pName = promoters.find_one({"_id": ObjectId(pID)})['name']
# rName = rbsses.find_one({"_id": ObjectId(rID)})['name']
# cName = cdsses.find_one({"_id": ObjectId(cID)})['name']
# tName = terminators.find_one({"_id": ObjectId(tID)})['name']


###########################################
# DIFFERENTIAL EQUATION FUNCTIONS

# Constitutive expression model
def dndt_mc(n,t,param):

	# Biochemical species
	n1, n2, n3 = n

	# Model parameters
	Cr, p, dm, dp, mu, Kmax = param

	# Diferential equations
	dn1 = Cr - (dm+mu)*n1
	dn2 = p*n1 - (dp+mu)*n2
	dn3 = mu*n3*(1.-n3/Kmax)

	dn = [dn1, dn2, dn3]

	return dn


###########################################
# DIFFERENTIAL EQUATION FUNCTIONS

# Constitutive expression model
def dndt_mi_araC(n,t,param):


	# Biochemical species
	n1, n2, n3, n4, n5, n6 = n

	constants = [n3]
	powers = [2]
	sqn3 = np.power(constants, powers)

	# Model parameters
	D, Vc, Ku, Kd, K, alfa, p, dm, darab, dp, mu, cn, Kmax = param
	Kb = Ku/Kd

	# ALGEBRAIC EQUATION

	pBAD_araC = cn - n1

	# Diferential equations
	dn1 = Kb*sqn3[0]*pBAD_araC - Ku*n1
	dn2 = D*n3*n6 - D*Vc*n2*n6  -  darab*n2
	dn3 = D*Vc*n2 - D*n3 - 2*Kb*sqn3[0]*pBAD_araC + 2*Ku*n1 - (darab+mu)*n3
	dn4 = alfa*K*pBAD_araC + K*n1 - (dm+mu)*n4
	dn5 = p*n4 - (dp+mu)*n5
	dn6 = mu*n6*(1 - n6/Kmax)

	dn = [dn1, dn2, dn3, dn4, dn5, dn6]

	return dn

###########################################
# DIFFERENTIAL EQUATION FUNCTIONS

# LuxR - LuxIPromoter
def dndt_mi_luxR(n,t,param):


	# Biochemical species
	n1, n2, n3, n4, n5, n6 = n

	# Model parameters

 	pI, kI, pN_luxI, dmI, kdLux, alphaI, dI, k_1, kd1, pR, cR, dmR, k_2, kd2, dRA, dR, dRA2, D, Vc, dA, dAe, mu, Kmax = param
	
	#n1 = LuxI
	c1 = (pI*kI *pN_luxI)/dmI
	c3 = kdLux + n3 
	#dn1 = c1*( kdLux/c3 + (alphaI*n3)/c3 ) - dI*n1 ## Represor
	dn1 = c1*( alphaI*kdLux/c3 + n3/c3 ) - dI*n1 ## Activator

	#n2 = LuxR
	c2 = k_1/kd1
	c4 = (pR*cR)/dmR

	#Algebraic equation for (LuxR.AHL)
	c6 = (2*k_2*kd1*n3 + k_1*n2*n4)
	c7 = (8*k_2)*c6
	c8 = k_1 + dRA
	c9 = (kd1*kd2)*c8*c8
	c10 = (kd2*c8)/(4*k_2)
	c11 = c7/c9 + 1
	MO  = c10*(math.sqrt(math.fabs(c11)) - 1)  # This is LuxR.AHL

	dn2 = c4 + k_1*MO  - (c2*n4 + dR)*n2 

	#x3 = (LuxR.AHL)2
	c5 = k_2/kd2
	dn3 = c5*MO*MO - (k_2 + dRA2)*n3

	#x4 = AHLint
	dn4 = k_1*MO  + D*Vc*n5  - (D + c2*n2 + dA)*n4

	#n5 = AHLext
	dn5 = D*240*n4 - (D*Vc*240 + dAe)*n5 #correction diff

	#n6 Number of cells
	dn6 = mu*n6*(1 - n6/Kmax)

	dn = [dn1, dn2, dn3, dn4, dn5, dn6]

	return dn

###########################################
# SELECTED PARAMETERS


#===========================================
model_id = promoters.find_one({"_id": ObjectId(pID)})['type']
#===========================================

############################################
# SOLVE MODEL

if model_id == "mc":

	mu = argArray[4] # min-1
	cn = argArray[5] # number of plasmids
	Kmax = argArray[6] # cells

	mu = float(mu)
	cn = float(cn)
	Kmax = float(Kmax)

	r = promoters.find_one({"_id": ObjectId(pID)})['r']
	pLBP = promoters.find_one({"_id": ObjectId(pID)})['lengthBP']
	cLBP = cdsses.find_one({"_id": ObjectId(cID)})['lengthBP']
	p = cdsses.find_one({"_id": ObjectId(cID)})['p'] # min-1
	dm = promoters.find_one({"_id": ObjectId(pID)})['dm'] # min-1
	dp = cdsses.find_one({"_id": ObjectId(cID)})['dp'] # min-1
	#Cr = 600*500/(pLBP+cLBP) #molec.min-1
	Cr = r*cn/(pLBP+cLBP) #molec.min-1
	#mu = 0.017 # min-1
	#Kmax = 1.6e8 # cells

	

	# print "RESTO DE PARAMETROS\n"
	# print mU
	# print cn
	# print kmax

	# sys.exit(0)
	

	param = [Cr, p, dm, dp, mu, Kmax]
	
	# Time vector
	time = np.arange(0.,301.,1.)

	# Initial conditions
	n0 = [1.,1.,1.] # Equilibrium: [Cr/(dm+mu), Cr*p/((dm+mu)*(dp+mu)), 1.]

	# Solve differential equations
	n = odeint(dndt_mc,n0,time,args=(param,))

	

	# fig = plt.figure(1, figsize=(8,8))

	# # mRNA
	# ax1 = fig.add_subplot(311)
	# ax1.plot(time, n[:,0],'k')
	# ax1.set_title('mRNA vs Time')
	# ax1.set_xlabel('Time (min)')
	# ax1.set_ylabel('mRNA (molec.)')
	# ax1.set_xlim([time[0],time[-1]])

	# # PoI
	# ax2 = fig.add_subplot(312)
	# ax2.plot(time, n[:,1],'r')
	# ax2.set_title('PoI vs Time')
	# ax2.set_xlabel('Time (min)')
	# ax2.set_ylabel('PoI (molec.)')
	# ax2.set_xlim([time[0],time[-1]])

	# # Number of cells
	# ax3 = fig.add_subplot(313)
	# ax3.plot(time, n[:,2],'k')
	# ax3.set_title('Number of cells vs Time')
	# ax3.set_xlabel('Time (min)')
	# ax3.set_ylabel('Number of cells')
	# ax3.set_xlim([time[0],time[-1]])

	# plt.tight_layout()
	# plt.show()


	time = time.reshape(301, 1)

	##################################################################
	# RANDOM FILE NAME GENERATION

	nombreCarpeta = datetime.utcnow().strftime("%Y-%m-%d-%H-%M-%S-%f")
	nombreA1 = datetime.utcnow().strftime("%Y-%m-%d-%H-%M-%S-%f")
	nombreA1 = nombreA1 + '.csv'
	nombreA2 = datetime.utcnow().strftime("%Y-%m-%d-%H-%M-%S-%f")
	nombreA2 = nombreA2 + '.csv'
	nombreA3 = datetime.utcnow().strftime("%Y-%m-%d-%H-%M-%S-%f")
	nombreA3 = nombreA3 + '.csv'
	print(nombreCarpeta)
	print(nombreA1)
	print(nombreA2)
	print(nombreA3)

	#################################################################
	# RANDOM FOLDER GENERATION 

	_dir = "python/modeling/modelingResults"
	_dir = os.path.join(_dir, 'Execution_%s' % nombreCarpeta)
	if not os.path.exists(_dir):
		os.makedirs(_dir)

	#################################################################
	# SAVING FILES IN THE CORRESPONDING DIRECTORY

	np.savetxt(_dir+'/'+nombreA1, np.c_[time,n[:,0]], delimiter=",", header="time,mRNA", comments="")
	np.savetxt(_dir+'/'+nombreA2, np.c_[time,n[:,1]], delimiter=",", header="time,PoI", comments="")
	np.savetxt(_dir+'/'+nombreA3, np.c_[time,n[:,2]], delimiter=",", header="time,Ncells", comments="")


	# with open('data_mRNA.csv', 'r') as fin:
	# 	print fin.read()
	# with open('data_PoI.csv', 'r') as fin:
	# 	print fin.read()
	# with open('data_Ncells.csv', 'r') as fin:
	# 	print fin.read()

elif model_id == "mi_araC":

	mu = argArray[4] # min-1
	cn = argArray[5] # number of plasmids
	Kmax = argArray[6] # cells
	perc = argArray[7] # % mg/mL

	mu = float(mu)
	cn = float(cn)
	Kmax = float(Kmax)
	perc = float(perc)



	vol = 2e-5	# mL
	Mm = 150.3	# g/mol
	NA = 6.022e23	# molec/mol
	arab0 = NA*vol*(perc/100)/(Mm*1000)

	D = 2 # min-1
	Vcel = 1.1e-9 # uL
	Vext = 1e-3 # uL
	Vc = Vcel/Vext
	Ku = 100 # min-1
	Kd = 10 # molec^2
	K = 2 # min-1
	alfa = 0.1
	darab = 1e-6 # min-1

	pLBP = promoters.find_one({"_id": ObjectId(pID)})['lengthBP']
	cLBP = cdsses.find_one({"_id": ObjectId(cID)})['lengthBP']
	p = cdsses.find_one({"_id": ObjectId(cID)})['p'] # min-1
	dm = promoters.find_one({"_id": ObjectId(pID)})['dm'] # min-1
	dp = cdsses.find_one({"_id": ObjectId(cID)})['dp'] # min-1

		

	# print "RESTO DE PARAMETROS\n"
	# print mU
	# print cn
	# print kmax

	# sys.exit(0)
	

	param = [D, Vc, Ku, Kd, K, alfa, p, dm, darab, dp, mu, cn, Kmax]
	
	# Time vector
	time = np.arange(0.,301.,1.)

	# Initial conditions
	n0 = [1.,arab0,1.,1.,1.,5.0e7]

	# Solve differential equations
	n = odeint(dndt_mi_araC,n0,time,mxstep=5000000,args=(param,))

	time = time.reshape(301, 1)

	##################################################################
	# RANDOM FILE NAME GENERATION

	nombreCarpeta = datetime.utcnow().strftime("%Y-%m-%d-%H-%M-%S-%f")
	nombreA1 = datetime.utcnow().strftime("%Y-%m-%d-%H-%M-%S-%f")
	nombreA1 = nombreA1 + '.csv'
	nombreA2 = datetime.utcnow().strftime("%Y-%m-%d-%H-%M-%S-%f")
	nombreA2 = nombreA2 + '.csv'
	nombreA3 = datetime.utcnow().strftime("%Y-%m-%d-%H-%M-%S-%f")
	nombreA3 = nombreA3 + '.csv'
	print(nombreCarpeta)
	print(nombreA1)
	print(nombreA2)
	print(nombreA3)

	#################################################################
	# RANDOM FOLDER GENERATION 

	_dir = "python/modeling/modelingResults"
	_dir = os.path.join(_dir, 'Execution_%s' % nombreCarpeta)
	if not os.path.exists(_dir):
		os.makedirs(_dir)

	#################################################################
	# SAVING FILES IN THE CORRESPONDING DIRECTORY

	np.savetxt(_dir+'/'+nombreA1, np.c_[time,n[:,3]], delimiter=",", header="time,mRNA", comments="")
	np.savetxt(_dir+'/'+nombreA2, np.c_[time,n[:,4]], delimiter=",", header="time,PoI", comments="")
	np.savetxt(_dir+'/'+nombreA3, np.c_[time,n[:,5]], delimiter=",", header="time,Ncells", comments="")


	# with open('data_mRNA.csv', 'r') as fin:
	# 	print fin.read()
	# with open('data_PoI.csv', 'r') as fin:
	# 	print fin.read()
	# with open('data_Ncells.csv', 'r') as fin:
	# 	print fin.read()
elif model_id == "mi_luxR":

	mu = argArray[4] # min-1
	cn = argArray[5] # number of plasmids
	Kmax = argArray[6] # cells
	# Para luxR el de la posicion 7 es ahl
	ahl = argArray[7] # % nM

	mu = float(mu)
	cn = float(cn)
	Kmax = float(Kmax)
	ahl = float(ahl)


	# Obtain parameter from db
	pLBP = promoters.find_one({"_id": ObjectId(pID)})['lengthBP']
	cLBP = cdsses.find_one({"_id": ObjectId(cID)})['lengthBP']
	p = cdsses.find_one({"_id": ObjectId(cID)})['p'] # min-1
	dm = promoters.find_one({"_id": ObjectId(pID)})['dm'] # min-1
	dp = cdsses.find_one({"_id": ObjectId(cID)})['dp'] # min-1

	#Hadr coded parameters
	time_effect =  mu  # doubling time effect [1/min]
	NA = 6.023e23                  # Avogadro's number: # particles/mol
	Vcell = 1.1e-9                   # typical volume of E. coli (microliters/cell). Source: Bionumbers
	Vext = 1e-3                     # culture medium volume [ul] in a microfluidics device
	Ccells_OD600_1=8e5               # cells/microliter for OD=1. 
	                                 # Source: Agilent, E. coli Cell Culture Concentration 
	                                 # from OD600 Calculator
	Ncell_0 = 0.1*Ccells_OD600_1*Vext                                  
	factor_units=1e15/(Vcell*NA) # Conversion factor from number of particles to
	                                  # concentration (1 nMolar=nanomols/liter)
	                                  # 1 particle/cell x 1/Vcell cell/microliter 
	                                  # x 1/nA mol/particle x
	                                  # 1e6 microliter/liter x 1e9 nanomol/l

	pN_luxI = 17                 # plasmid number of luxI in pBR322 (15-20 copies/cell)
	pN_luxR = 10                 # plasmid number of luxI in pACYC184 (10 copies/cell)

	# LuxI
	alphaI = 0.1              # leakage of repressor
	dmI = time_effect + 0.23                # degradation rate of LuxI mRNA [1/min]. Typical mRNA degradation rate for E coli
	dI = time_effect + 0.01                  # degradation rate of LuxI [1/min]
	pI = 3.09                     # translation rate of LuxI #mRNA [1/min]. b*dmI from Weber.  [3.0928 - 6.1856]
	kI = 1.03                      # average transcription rate of LuxI [1/min] from calculator [1.0309 - 10.3093] from our rates calculator based on Alberts, and
	                                # Ref 2: 50/b from Weber
	# LuxR
	alphaR = 0.01             # ratio between unactivated vs activated of expresion LuxR
	dmR = time_effect + 0.23                # degradation rate of LuxR mRNA [1/min]
	dR = time_effect + math.log(2)/5                 # degradation rate of LuxR [1/min]
	pR =  2.38 #b*dmR                  # translation rate of LuxR [1/min] [2.381 - 4.7619] from our rates calculator, Alberts
	kR = 0.79 #200/b                 # transcription rate of LuxR [1/min] [0.79365 - 7.9365] from our rates calculator
	cR = kR*pN_luxR  #constitutive expression of LuxR (always ConstR = initCond of plasmids in complete model)
	# Monomer
	kd1 = 10 #100                  # dissociation constant of R to A [nM], Urbanowski etal. 2004
	k_1 = 1#10                    # unbinding rate LuxR to AHL [1/min]

	dRA = time_effect + math.log(2)/5   # degradation rate of (LuxR.A) [1/min]. Buchler et al. 2004 Monomer half-life is just few minutes.

	# Dimer
	kd2 = 10
	k_2 = 0.1                     


	kdLux = 100           # dissociation cte (LuxR.A)2 to promoter [nM], Bucler et al [1 1000]nM
	k_Lux = 10                  # dissociation rate(LuxR.A)2 to Lux promoter [1/min]
	kLux = k_Lux/kdLux               # binding rate LuxR to AHL [1/min]
	dRA2 = time_effect         # Ron Weiss et al. A synthetic multicellular system for programmed pattern formation
	                            # Buchler 2004 Degradation rate for (LuxR.AHL)_2. Corresponding to dilution if cell half-life = tau minutes 

	D = 2                    # kinetic rate of AHL external transport [1/min] across the cell membrane, calculated
	dA = time_effect + 0.0002                 #[0.05 0.03 min^-1]Degradation from Bionumbers online      
	                            #0.0164, Degradation rate for AHL. From Kaufmann etal. 2005. Similar to You etal. Nature, 2004 
	dAe = 0.0002  
	Vc = Vcell/Vext

	# Replace the variables coming from Printeria's database
	dI = dp
	dmI = dm
	pI = p

	ahl0 = ahl * 6.02300  #AHL en nM x 1e-9M/1nM x N Avogadro x Vol (1e-9L)
	# print "RESTO DE PARAMETROS\n"
	# print mU
	# print cn
	# print kmax

	# sys.exit(0)
	
 	param = [pI, kI, pN_luxI, dmI, kdLux, alphaI, dI, k_1, kd1, pR, cR, dmR, k_2, kd2, dRA, dR, dRA2, D, Vc, dA, dAe, mu, Kmax]

	# Time vector
	# time = np.arange(0.,301.,0.001)
	time = np.arange(0.,10.,0.0001)

	# Initial conditions
	n0 = [929,500.,0.,0.,ahl,Ncell_0]

	# Solve differential equations
	n = odeint(dndt_mi_luxR,n0,time, args=(param,))

	time = time.reshape(100000, 1)

	##################################################################
	# RANDOM FILE NAME GENERATION

	nombreCarpeta = datetime.utcnow().strftime("%Y-%m-%d-%H-%M-%S-%f")
	nombreA1 = datetime.utcnow().strftime("%Y-%m-%d-%H-%M-%S-%f")
	nombreA1 = nombreA1 + '.csv'
	nombreA2 = datetime.utcnow().strftime("%Y-%m-%d-%H-%M-%S-%f")
	nombreA2 = nombreA2 + '.csv'
	nombreA3 = datetime.utcnow().strftime("%Y-%m-%d-%H-%M-%S-%f")
	nombreA3 = nombreA3 + '.csv'
	print(nombreCarpeta)
	print(nombreA1)
	print(nombreA2)
	print(nombreA3)

	#################################################################
	# RANDOM FOLDER GENERATION 

	_dir = "python/modeling/modelingResults"
	_dir = os.path.join(_dir, 'Execution_%s' % nombreCarpeta)
	if not os.path.exists(_dir):
		os.makedirs(_dir)

	#################################################################
	# SAVING FILES IN THE CORRESPONDING DIRECTORY

	np.savetxt(_dir+'/'+nombreA1, np.c_[time,n[:,1]], delimiter=",", header="time,mRNA", comments="")
	np.savetxt(_dir+'/'+nombreA2, np.c_[time,n[:,0]], delimiter=",", header="time,PoI", comments="")
	np.savetxt(_dir+'/'+nombreA3, np.c_[time,n[:,5]], delimiter=",", header="time,Ncells", comments="")


	# with open('data_mRNA.csv', 'r') as fin:
	# 	print fin.read()
	# with open('data_PoI.csv', 'r') as fin:
	# 	print fin.read()
	# with open('data_Ncells.csv', 'r') as fin:
	# 	print fin.read()

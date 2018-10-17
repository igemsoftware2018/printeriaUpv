import sys
import csv
import os
from bson.objectid import ObjectId
from datetime import datetime
import serial
import time

#ser = serial.Serial('/dev/ttyACM0', 9600)

from pymongo import MongoClient
client = MongoClient('localhost', 27017)
db = client.printeria

promoters = db.promoters
rbsses = db.rbsses
cdsses = db.cdsses
terminators = db.terminators
inventory = db.inventories
jobs = db.jobs
recipes = db['jobs-recipes']
users = db.users
admin = users.find_one({"username": "admin"})['_id']

checkJobInExecution = False;

jobArray = []

for document in jobs.find():
	if(document['status'] == 'doing'):
		checkJobInExecution = True;
	print(document['status']) # iterate the cursor
	if(document['status'] == 'toDo' or document['status'] == 'missing'):
		jobArray.append(document)

if (checkJobInExecution == True):
	print "----------------------------"
	print 'Hay un trabajo en ejecucion'
	print "----------------------------"
else:
	while len(jobArray) >= 0:
		print "Length del array de jobs"
		print len(jobArray)
		if(len(jobArray) == 0):
			print "------------------------------------------"
			print "No hay trabajos disponibles para imprimir"
			print "------------------------------------------"
			sys.exit()
		jobToExecute = jobArray.pop(0)
		print 'No hay trabajos en ejecucion'
		print '---------------'
		print 'Job desencolado'
		print '---------------'
		print jobToExecute['name']

		#CHECK PARTS

		# test = inventory.find({"typePart": {'exists': True}})
		# for document in test:
		# 	print(document)

		document = inventory.find()

		promFound = False
		rbsFound = False
		cdsFound = False
		termFound = False
		missingParts = ""



		for row in document:

			vProm = 1
			vRbs = 1
			vCds = 1
			vTerm = 1

			promCartridgeToEmpty = ""
			rbsCartridgeToEmpty = ""
			cdsCartridgeToEmpty = ""
			termCartridgeToEmpty = ""

			for i in range (1, 26):
				if(row['c'+str(i)]['idPart'] != ""):
					if(str(row['c'+str(i)]['idPart']) == str(jobToExecute['Promoters']) and row['c'+str(i)]['filled'] == True):
						if(vProm > 0):
							print "promotor encontrado"
							promFound = True
							promCartridgeToEmpty = 'c'+str(i)
						vProm -= 1
					elif(str(row['c'+str(i)]['idPart']) == str(jobToExecute['RBS']) and row['c'+str(i)]['filled'] == True):
						if(vRbs > 0):
							print "rbs encontrada"
							rbsFound = True
							rbsCartridgeToEmpty = 'c'+str(i)
						vRbs -= 1
					elif(str(row['c'+str(i)]['idPart']) == str(jobToExecute['CDS']) and row['c'+str(i)]['filled'] == True):
						if(vCds > 0):
							print "cds encontrada"
							cdsFound = True
							cdsCartridgeToEmpty = 'c'+str(i)
						vCds -= 1
					elif(str(row['c'+str(i)]['idPart']) == str(jobToExecute['Terminators']) and row['c'+str(i)]['filled'] == True):
						if(vTerm > 0):
							print "terminador encontrado"
							termFound = True
							termCartridgeToEmpty = 'c'+str(i)
						vTerm -= 1



		promId = jobToExecute['Promoters']
		rbsId = jobToExecute['RBS']
		cdsId = jobToExecute['CDS']
		termId = jobToExecute['Terminators']

		promName = promoters.find_one({"_id": ObjectId(promId)})['name']
		rbsName = rbsses.find_one({"_id": ObjectId(rbsId)})['name']
		cdsName = cdsses.find_one({"_id": ObjectId(cdsId)})['name']
		termName = terminators.find_one({"_id": ObjectId(termId)})['name']

		if(promFound and rbsFound and cdsFound and termFound):
			print "-----------------------------------------------------"
			print "Todas las partes seleccionadas estan en el inventario"
			print "-----------------------------------------------------"

			# UPDATING INVENTORY WITH EMPTIED PARTS

			postInv = {

			"_id": row['_id'],
			"__v": row['__v'],
			"c1": row['c1'],
			"c2": row['c2'],
			"c3": row['c3'],
			"c4": row['c4'],
			"c5": row['c5'],
			"c6": row['c6'],
			"c7": row['c7'],
			"c8": row['c8'],
			"c9": row['c9'],
			"c10": row['c10'],
			"c11": row['c11'],
			"c12": row['c12'],
			"c13": row['c13'],
			"c14": row['c14'],
			"c15": row['c15'],
			"c16": row['c16'],
			"c17": row['c17'],
			"c18": row['c18'],
			"c19": row['c19'],
			"c20": row['c20'],
			"c21": row['c21'],
			"c22": row['c22'],
			"c23": row['c23'],
			"c24": row['c24'],
			"c25": row['c25']
			}

			postInv[promCartridgeToEmpty]['filled'] = False
			postInv[rbsCartridgeToEmpty]['filled'] = False
			postInv[cdsCartridgeToEmpty]['filled'] = False
			postInv[termCartridgeToEmpty]['filled'] = False


			print "\n\n"
			print "ESTE ES EL INVENTARIO"
		#	print postInv

			inventory.update_one({'_id':postInv['_id']}, {"$set": postInv}, upsert=False)

			print "\n\n\n"
			print "ESTE ES EL INVENTARIO UNA VEZ QUE SE HA MODIFICADO"

			#for row in inventory.find():
			#	print row


			# UPDATING JOB TO EXECUTE (i.e setting status = 'doing') 
			postJob = {

				"_id": jobToExecute['_id'],
				"name": jobToExecute['name'],
				"description": jobToExecute['description'],
				"Promoters": jobToExecute['Promoters'],
				"RBS": jobToExecute['RBS'],
				"CDS": jobToExecute['CDS'],
				"Terminators": jobToExecute['Terminators'],
				"coldzoneTemperature": jobToExecute['coldzoneTemperature'],
				"coldzoneTime": jobToExecute['coldzoneTime'],
				"hotzoneTemperature": jobToExecute['hotzoneTemperature'],
				"hotzoneTime": jobToExecute['hotzoneTime'],
				"multicycle": jobToExecute['multicycle'],
				"idUser": jobToExecute['idUser'],
				"executable": jobToExecute['executable'],
				"status": 'doing',
				"finishTime": jobToExecute['finishTime'],
				"startTime": jobToExecute['startTime'],
				"creationDate": jobToExecute['creationDate'],
				"__v": jobToExecute['__v']
			}

			multicycle = jobToExecute['multicycle']

			jobs.update_one({'_id':jobToExecute['_id']}, {"$set": postJob}, upsert=False)



			# import csv
			# import os
			# from bson.objectid import ObjectId
			# from datetime import datetime

			# jobToExecute = {
			#         "_id" : "1234"
			# }

			# with open(jobToExecute['_id']+'.txt', 'r') as fin:
			#     data = fin.read().splitlines(True)
			#     if(str(data[0].strip())=="fin"):
			#         print "fin"
			# with open(jobToExecute['_id']+'.txt', 'w') as fout:
			#     fout.writelines(data[1:])


			# import csv
			# import os
			# from bson.objectid import ObjectId
			# from datetime import datetime

			# jobToExecute = {
			#         "_id" : "1234"
			# }

			# f = open(jobToExecute['_id']+'.txt', "w+")
			# f.write("test1\n")
			# f.write("test2\n")
			# f.write("test3\n")
			# f.write("fin\n")
			# f.close()

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("--------------------------")
			# f.write("\n")

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("Execution Sequence")
			# f.write("\n")

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("--------------------------")
			# f.write("\n")

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("1. Init")
			# f.write("\n")

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("2. Empty Cartridges")
			# f.write("\n")


			# multicycleList = []

			# for value in multicycle:
			# 	multicycleList.append(value)
			# #	print value

			# print "Number of cycles: "
			# print len(multicycleList)

			# i=0

			# print "----------"
			# print "Cycle list"
			# print "----------"

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("3. Cycles:")
			# f.write("\n")

			# cycleNumber = 0
			# while(i<len(multicycleList)):
			# 	cycleType = multicycleList[i]['cycleType']
				
			# 	if(cycleType == 'hot'):
			# 		print "Cycle Type: "
			# 		print "hot"
			# 		print "Hot Zone Temperature: "
			# 		print multicycleList[i]['hotzoneTemperature']
			# 		print "Hot Zone Time: "
			# 		print multicycleList[i]['hotzoneTime']
			# 		f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# 		f.write("Cycle ")
			# 		f.write(str(cycleNumber))
			# 		f.write("\n")
			# 		f.write("\t")
			# 		f.write("Hot Zone Temperature: ")
			# 		f.write(str(multicycleList[i]['hotzoneTemperature']))
			# 		f.write("\n")
			# 		f.write("\t")
			# 		f.write("Hot Zone Time: ")
			# 		f.write(str(multicycleList[i]['hotzoneTime']))
			# 		f.write("\n")
			# 		cycleNumber += 1
			# 	elif(cycleType == 'cold'):
			# 		print "Cycle Type: "
			# 		print "cold"
			# 		print "Cold Zone Temperature: "
			# 		print multicycleList[i]['coldzoneTemperature']
			# 		print "Cold Zone Time: "
			# 		print multicycleList[i]['coldzoneTime']
			# 		f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# 		f.write("Cycle ")
			# 		f.write(str(cycleNumber))
			# 		f.write("\n")
			# 		f.write("\t")
			# 		f.write("Cold Zone Temperature: ")
			# 		f.write(str(multicycleList[i]['coldzoneTemperature']))
			# 		f.write("\n")
			# 		f.write("\t")
			# 		f.write("Cold Zone Time: ")
			# 		f.write(str(multicycleList[i]['coldzoneTime']))
			# 		f.write("\n")
			# 		cycleNumber += 1
			# 	elif(cycleType == 'full'):
			# 		print "Cycle Type: "
			# 		print "full"
			# 		print "Repetitions"
			# 		print multicycleList[i]['repetitions']
			# 		print "Hot Zone Temperature"
			# 		print multicycleList[i]['hotzoneTemperature']
			# 		print "Hot Zone Time"
			# 		print multicycleList[i]['hotzoneTime']
			# 		print "Cold Zone Temperature"
			# 		print multicycleList[i]['coldzoneTemperature']
			# 		print "Cold Zone Time"
			# 		print multicycleList[i]['coldzoneTime']
			# 		reps = multicycleList[i]['repetitions']
			# 		f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# 		for j in range(cycleNumber, reps+1):
			# 			f.write("Cycle ")
			# 			f.write(str(cycleNumber))
			# 			f.write("\n")
			# 			f.write("\t")
			# 			f.write("Hot Zone Temperature: ")
			# 			f.write(str(multicycleList[i]['hotzoneTemperature']))
			# 			f.write("\n")
			# 			f.write("\t")
			# 			f.write("Hot Zone Time: ")
			# 			f.write(str(multicycleList[i]['hotzoneTime']))
			# 			f.write("\n")
			# 			f.write("\t")
			# 			f.write("Cold Zone Temperature: ")
			# 			f.write(str(multicycleList[i]['coldzoneTemperature']))
			# 			f.write("\n")
			# 			f.write("\t")
			# 			f.write("Cold Zone Time: ")
			# 			f.write(str(multicycleList[i]['coldzoneTime']))
			# 			f.write("\n")
			# 			cycleNumber += 1
			# 	i+=1



			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("--------------------------")
			# f.write("\n")

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("Execution Sequence")
			# f.write("\n")

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("--------------------------")
			# f.write("\n")

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("init")
			# f.write("\n")

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("emptyCartridges")
			# f.write("\n")


			# multicycleList = []

			# for value in multicycle:
			# 	multicycleList.append(value)
			# #	print value

			# print "Number of cycles: "
			# print len(multicycleList)

			# i=0

			# print "----------"
			# print "Cycle list"
			# print "----------"

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("cycleStart")
			# f.write("\n")

			# cycleNumber = 0
			# while(i<len(multicycleList)):
			# 	cycleType = multicycleList[i]['cycleType']
				
			# 	if(cycleType == 'hot'):
			# 		print "Cycle Type: "
			# 		print "hot"
			# 		print "Hot Zone Temperature: "
			# 		print multicycleList[i]['hotzoneTemperature']
			# 		print "Hot Zone Time: "
			# 		print multicycleList[i]['hotzoneTime']
			# 		f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# 		f.write("cycle")
			# 		f.write(str(cycleNumber))
			# 		f.write("\n")
			# 		f.write("\t")
			# 		f.write("hotzoneTemperature:")
			# 		f.write(str(multicycleList[i]['hotzoneTemperature']))
			# 		f.write("\n")
			# 		f.write("\t")
			# 		f.write("hotzoneTime:")
			# 		f.write(str(multicycleList[i]['hotzoneTime']))
			# 		f.write("\n")
			# 		cycleNumber += 1
			# 	elif(cycleType == 'cold'):
			# 		print "Cycle Type: "
			# 		print "cold"
			# 		print "Cold Zone Temperature: "
			# 		print multicycleList[i]['coldzoneTemperature']
			# 		print "Cold Zone Time: "
			# 		print multicycleList[i]['coldzoneTime']
			# 		f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# 		f.write("Cycle ")
			# 		f.write(str(cycleNumber))
			# 		f.write("\n")
			# 		f.write("\t")
			# 		f.write("coldzoneTemperature:")
			# 		f.write(str(multicycleList[i]['coldzoneTemperature']))
			# 		f.write("\n")
			# 		f.write("\t")
			# 		f.write("coldzoneTime:")
			# 		f.write(str(multicycleList[i]['coldzoneTime']))
			# 		f.write("\n")
			# 		cycleNumber += 1
			# 	elif(cycleType == 'full'):
			# 		print "Cycle Type: "
			# 		print "full"
			# 		print "Repetitions"
			# 		print multicycleList[i]['repetitions']
			# 		print "Hot Zone Temperature"
			# 		print multicycleList[i]['hotzoneTemperature']
			# 		print "Hot Zone Time"
			# 		print multicycleList[i]['hotzoneTime']
			# 		print "Cold Zone Temperature"
			# 		print multicycleList[i]['coldzoneTemperature']
			# 		print "Cold Zone Time"
			# 		print multicycleList[i]['coldzoneTime']
			# 		reps = multicycleList[i]['repetitions']
			# 		f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# 		for j in range(cycleNumber, reps+1):
			# 			f.write("cycle")
			# 			f.write(str(cycleNumber))
			# 			f.write("\n")
			# 			f.write("\t")
			# 			f.write("hotzoneTemperature:")
			# 			f.write(str(multicycleList[i]['hotzoneTemperature']))
			# 			f.write("\n")
			# 			f.write("\t")
			# 			f.write("hotzoneTime:")
			# 			f.write(str(multicycleList[i]['hotzoneTime']))
			# 			f.write("\n")
			# 			f.write("\t")
			# 			f.write("coldzoneTemperature:")
			# 			f.write(str(multicycleList[i]['coldzoneTemperature']))
			# 			f.write("\n")
			# 			f.write("\t")
			# 			f.write("coldzoneTime:")
			# 			f.write(str(multicycleList[i]['coldzoneTime']))
			# 			f.write("\n")
			# 			cycleNumber += 1
			# 	i+=1

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("cycleEnd")
			# f.write("\n")

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("toOutput")
			# f.write("\n")

			# f = open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt',"a+")
			# f.write("end")
			# f.write("\n")

			# print "\n\n\n\n"


			break

		else:
			if(promFound == False):
				missingParts = missingParts + promName
			if(rbsFound == False):
				missingParts = missingParts + "-" + rbsName
			if(cdsFound == False):
				missingParts = missingParts + "-" + cdsName
			if(termFound == False):
				missingParts = missingParts + "-" + termName
			print "Partes no disponibles: "
			print "-----------------------------------------------------"
			print missingParts
			print "-----------------------------------------------------"

			post = {

				"_id": jobToExecute['_id'],
				"name": jobToExecute['name'],
				"description": jobToExecute['description'],
				"Promoters": jobToExecute['Promoters'],
				"RBS": jobToExecute['RBS'],
				"CDS": jobToExecute['CDS'],
				"Terminators": jobToExecute['Terminators'],
				"coldzoneTemperature": jobToExecute['coldzoneTemperature'],
				"coldzoneTime": jobToExecute['coldzoneTime'],
				"hotzoneTemperature": jobToExecute['hotzoneTemperature'],
				"hotzoneTime": jobToExecute['hotzoneTime'],
				"idUser": jobToExecute['idUser'],
				"executable": jobToExecute['executable'],
				"status": 'missing',
				"finishTime": jobToExecute['finishTime'],
				"startTime": jobToExecute['startTime'],
				"creationDate": jobToExecute['creationDate'],
				"__v": jobToExecute['__v']
			}

			jobs.update_one({'_id':jobToExecute['_id']}, {"$set": post}, upsert=False)



#Containers for the split methods

# promArray = []
# rbsArray = []
# cdsArray = []
# termArray = []
# tuArray = []

# #indexes

# i = 0
# identifier = ""


# csvRowsSinComma = sys.argv[1].replace("comma", ",")
# csvRowsSinleftP = csvRowsSinComma.replace("leftP", "(")
# csvRowsSinrightP = csvRowsSinleftP.replace("rightP", ")")
# #csvRowsSinLineBreak = csvRowsSinComma.replace("lineBreak", "\n")
# csvRowsSinSpace = csvRowsSinrightP.replace("space", " ")


# if csvRowsSinSpace.find("recipecsv_file") != -1:
# 	csvRowsSinSpace = csvRowsSinSpace.split("recipecsv_file")
# 	csvRowsSinSpace = csvRowsSinSpace[1]
# 	identifier="recipes"

# elif csvRowsSinSpace.find("promotercsv_file") != -1:
# 	csvRowsSinSpace = csvRowsSinSpace.split("promotercsv_file")
# 	csvRowsSinSpace = csvRowsSinSpace[1]
# 	identifier="promoters"

# elif csvRowsSinSpace.find("rbscsv_file") != -1:
# 	csvRowsSinSpace = csvRowsSinSpace.split("rbscsv_file")
# 	csvRowsSinSpace = csvRowsSinSpace[1]
# 	identifier="rbss"

# elif csvRowsSinSpace.find("cdscsv_file") != -1:
# 	csvRowsSinSpace = csvRowsSinSpace.split("cdscsv_file")
# 	csvRowsSinSpace = csvRowsSinSpace[1]
# 	identifier="cdss"

# elif csvRowsSinSpace.find("terminatorcsv_file") != -1:
# 	csvRowsSinSpace = csvRowsSinSpace.split("terminatorcsv_file")
# 	csvRowsSinSpace = csvRowsSinSpace[1]
# 	identifier="terminators"

# else:
# 	print "Error"

# csv = csvRowsSinSpace.split("lineBreak")
# csv.pop(0)
# csv.pop()

# for row in csv:
# 	csv[i] = row.split(",")
# 	i = i+1

# i=0

# if identifier == "promoters":
# 	for row in csv:
# 		promObj = []
# 		for value in row:
# 			promObj.append(value)
# 		promoters.insert(
#     {
#     "_id" : ObjectId(),
#     "name" : promObj[0],
#     "description" : promObj[1],
#     "category" : promObj[2],
#     "type" : promObj[3],
#     "lengthBP" : promObj[4],
#     "quantity" : promObj[5],
#     "r" : promObj[6],
#     "dm" : promObj[7],
#     "date" : datetime.utcnow(),
#     "idUser" : ObjectId(admin)
#     }
# )


# if identifier == "rbss":
# 	for row in csv:
# 		rbsObj = []
# 		for value in row:
# 			rbsObj.append(value)
# 		rbsses.insert(
# 	{
# 	"_id" : ObjectId(),
# 	"name" : rbsObj[0],
# 	"description" : rbsObj[1],
# 	"category" : rbsObj[2],
# 	"lengthBP" : rbsObj[3],
# 	"quantity" : rbsObj[4],
# 	"date" : datetime.utcnow(),
# 	"idUser" : ObjectId(admin)
# 	}
# )

# if identifier == "cdss":
# 	for row in csv:
# 		cdsObj = []
# 		for value in row:
# 			cdsObj.append(value)
# 		cdsses.insert(
#     {
#     "_id" : ObjectId(),
#     "name" : cdsObj[0],
#     "description" : cdsObj[1],
#     "type" : cdsObj[2],
#     "lengthBP" : cdsObj[3],
#     "quantity" : cdsObj[4],
#     "dp" : cdsObj[5],
#     "p" : cdsObj[6],
#     "date" : datetime.utcnow(),
#     "idUser" : ObjectId(admin)
#     }
# )

# if identifier == "terminators":
# 	for row in csv:
# 		termObj = []
# 		for value in row:
# 			termObj.append(value)
# 		terminators.insert(
#     {
#     "_id" : ObjectId(),
#     "name" : termObj[0],
#     "description" : termObj[1],
#     "category" : termObj[2],
#     "lengthBP" : termObj[3],
#     "quantity" : termObj[4],
#     "date" : datetime.utcnow(),
#     "idUser" : ObjectId(admin)
#     }
# )

# partsObj = []
# i = 0
# j = 0

# if identifier == "recipes":
# 	partsObj = []
# 	for row in csv:
# 		auxObj = []
# 		# print row
# 		for value in row:
# 		    auxObj.append(value)
# 		auxObj.pop(0)
# 		auxObj.pop(0)
# 		auxObj.pop()
# 		auxObj.pop()
# 		auxObj.pop()
# 		auxObj.pop()
# 		partsObj.append(auxObj)

# 	for row in csv:
# 		tuObj = []
# 		auxObj = []
# 		# print row
# 		for value in row:
# 			tuObj.append(value)
# 		for i in partsObj:
# 			for j in i:
# 				auxObj.append(j)
# 		prom = promoters.find_one({"name": auxObj[0]})['_id']
# 		rbs = rbsses.find_one({"name": auxObj[1]})['_id']
# 		cds = cdsses.find_one({"name": auxObj[2]})['_id']
# 		term = terminators.find_one({"name": auxObj[3]})['_id']
# 		recipes.insert(
# 		{
# 		"_id" : ObjectId(),
# 		"name" : tuObj[0],
# 		"description" : tuObj[1],
# 		"Promoters" : prom,
# 		"RBS" : rbs,
# 		"CDS" : cds,
# 		"Terminators" : term,
# 		"coldzoneTemperature" : tuObj[6],
# 		"coldzoneTime" : tuObj[7],
# 		"hotzoneTemperature" : tuObj[8],
# 		"hotzoneTime" : tuObj[9],
# 		"date" : datetime.utcnow(),
# 		"idUser" : ObjectId(admin)
# 		}
# 	)










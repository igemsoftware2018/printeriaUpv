import sys
import csv
import os
from bson.objectid import ObjectId
from datetime import datetime

from pymongo import MongoClient
client = MongoClient('localhost', 27017)
db = client.printeria

promoters = db.promoters
rbsses = db.rbsses
cdsses = db.cdsses
terminators = db.terminators
recipes = db['jobs-recipes']
users = db.users
admin = users.find_one({"username": "admin"})['_id']
cztemp = users.find_one({"username": "admin"})['configuration']['coldzoneTemperature']
cztime = users.find_one({"username": "admin"})['configuration']['coldzoneTime']
hztemp = users.find_one({"username": "admin"})['configuration']['hotzoneTemperature']
hztime = users.find_one({"username": "admin"})['configuration']['hotzoneTime']




#Containers for the split methods

promArray = []
rbsArray = []
cdsArray = []
termArray = []
tuArray = []

#indexes

i = 0
identifier = ""


csvRowsSinComma = sys.argv[1].replace("comma", ",")
csvRowsSinleftP = csvRowsSinComma.replace("leftP", "(")
csvRowsSinrightP = csvRowsSinleftP.replace("rightP", ")")
#csvRowsSinLineBreak = csvRowsSinComma.replace("lineBreak", "\n")
csvRowsSinSpace = csvRowsSinrightP.replace("space", " ")


if csvRowsSinSpace.find("recipecsv_file") != -1:
	csvRowsSinSpace = csvRowsSinSpace.split("recipecsv_file")
	csvRowsSinSpace = csvRowsSinSpace[1]
	identifier="recipes"

elif csvRowsSinSpace.find("promotercsv_file") != -1:
	csvRowsSinSpace = csvRowsSinSpace.split("promotercsv_file")
	csvRowsSinSpace = csvRowsSinSpace[1]
	identifier="promoters"

elif csvRowsSinSpace.find("rbscsv_file") != -1:
	csvRowsSinSpace = csvRowsSinSpace.split("rbscsv_file")
	csvRowsSinSpace = csvRowsSinSpace[1]
	identifier="rbss"

elif csvRowsSinSpace.find("cdscsv_file") != -1:
	csvRowsSinSpace = csvRowsSinSpace.split("cdscsv_file")
	csvRowsSinSpace = csvRowsSinSpace[1]
	identifier="cdss"

elif csvRowsSinSpace.find("terminatorcsv_file") != -1:
	csvRowsSinSpace = csvRowsSinSpace.split("terminatorcsv_file")
	csvRowsSinSpace = csvRowsSinSpace[1]
	identifier="terminators"

else:
	print "Error"

csv = csvRowsSinSpace.split("lineBreak")
csv.pop(0)
csv.pop()

for row in csv:
	csv[i] = row.split(",")
	i = i+1

i=0

if identifier == "promoters":
	for row in csv:
		promObj = []
		for value in row:
			promObj.append(value)
		if(promObj[2] == ""):
			promObj[2] = "n/a"
		if(promObj[3] == ""):
			promObj[3] = "n/a"
		promoters.insert(
	    {
	    "_id" : ObjectId(),
	    "name" : promObj[0],
	    "description" : promObj[1],
	    "category" : promObj[2],
	    "type" : promObj[3],
	    "lengthBP" : int(promObj[4]),
	    "quantity" : float(promObj[5]),
	    "r" : float(promObj[6]),
	    "dm" : float(promObj[7]),
	    "date" : datetime.utcnow(),
	    "idUser" : ObjectId(admin)
	    }
	)
	print "doneProm"


if identifier == "rbss":
	for row in csv:
		rbsObj = []
		for value in row:
			rbsObj.append(value)
		if(rbsObj[2] == ""):
			rbsObj[2] = "n/a"
		rbsses.insert(
		{
		"_id" : ObjectId(),
		"name" : rbsObj[0],
		"description" : rbsObj[1],
		"category" : rbsObj[2],
		"lengthBP" : int(rbsObj[3]),
		"quantity" : float(rbsObj[4]),
		"date" : datetime.utcnow(),
		"idUser" : ObjectId(admin)
		}
	)
	print "doneRbs"

if identifier == "cdss":
	for row in csv:
		cdsObj = []
		for value in row:
			cdsObj.append(value)
		if(cdsObj[2] == ""):
			cdsObj[2] = "n/a"
		cdsses.insert(
    	{
	    "_id" : ObjectId(),
	    "name" : cdsObj[0],
	    "description" : cdsObj[1],
	    "type" : cdsObj[2],
	    "lengthBP" : int(cdsObj[3]),
	    "quantity" : float(cdsObj[4]),
	    "dp" : float(cdsObj[5]),
	    "p" : float(cdsObj[6]),
	    "date" : datetime.utcnow(),
	    "idUser" : ObjectId(admin)
    	}
	)
	print "doneCds"

if identifier == "terminators":
	for row in csv:
		termObj = []
		for value in row:
			termObj.append(value)
		if(termObj[2] == ""):
			termObj[2] = "n/a"
		terminators.insert(
    	{
	    "_id" : ObjectId(),
	    "name" : termObj[0],
	    "description" : termObj[1],
	    "category" : termObj[2],
	    "lengthBP" : int(termObj[3]),
	    "quantity" : float(termObj[4]),
	    "date" : datetime.utcnow(),
	    "idUser" : ObjectId(admin)
    	}
	)
	print "doneTerm"

partsObj = []
i = 0
j = 0

if identifier == "recipes":
	partsObj = []
	for row in csv:
		auxObj = []
		# print row
		for value in row:
		    auxObj.append(value.strip())
		auxObj.pop(0)
		auxObj.pop(0)
		partsObj.append(auxObj)

	for row in csv:
		tuObj = []
		auxObj = []
		# print row
		for value in row:
			tuObj.append(value)
		for i in partsObj:
			for j in i:
				auxObj.append(j)
		prom = promoters.find_one({"name": auxObj[0]})['_id']
		rbs = rbsses.find_one({"name": auxObj[1]})['_id']
		cds = cdsses.find_one({"name": auxObj[2]})['_id']
		term = terminators.find_one({"name": auxObj[3]})['_id']
		if(tuObj[1] == ""):
			tuObj[1] = "n/a"

		cycle0 = {
			"hotzoneTemperature": 37, 
			"hotzoneTime": 10,
			"cycleType": 'hot'
		}

		cycle1 = {
			"repetitions": 25,
			"hotzoneTemperature": 37, 
			"hotzoneTime": 3,
			"coldzoneTemperature": 16,
			"coldzoneTime": 4,
			"cycleType": 'full'
		}

		cycle2 = {
			"hotzoneTemperature": 50,
		    "hotzoneTime": 10,
		    "cycleType": 'hot'
		}

		arrayMulticycle = []

		arrayMulticycle.append(cycle0)
		arrayMulticycle.append(cycle1)
		arrayMulticycle.append(cycle2)

		objectId = ObjectId()

		newpath = r"python/printJob/printingResults"+ "/" + str(tuObj[0])
		if not os.path.exists(newpath):
			os.makedirs(newpath)
		



		recipes.insert(
		{
		"_id" : objectId,
		"name" : tuObj[0],
		"description" : tuObj[1],
		"Promoters" : prom,
		"RBS" : rbs,
		"CDS" : cds,
		"Terminators" : term,
		"coldzoneTemperature" : int(cztemp),
		"coldzoneTime" : int(cztime),
		"hotzoneTemperature" : int(hztemp),
		"hotzoneTime" : int(hztime),
		"multicycle" : arrayMulticycle,
		"date" : datetime.utcnow(),
		"idUser" : ObjectId(admin)
		}
	)

	print "doneRec"


	# "multicycle":[
		# 	 "cycle0":{
		#       "hotzoneTemperature": 37, 
		#       "hotzoneTime": 10,
		#       "cycleType": 'hot'
		#      },
		#     "cycle1":{
		#       "repetitions": 25,
		#       "hotzoneTemperature": 37, 
		#       "hotzoneTime": 3,
		#       "coldzoneTemperature": 16,
		#       "coldzoneTime": 4,
		#       "cycleType": 'full'
		#      },
		#     "cycle2":{
		#       "hotzoneTemperature": 50,
		#       "hotzoneTime": 10,
		#       "cycleType": 'hot'
		#      }
		# ],









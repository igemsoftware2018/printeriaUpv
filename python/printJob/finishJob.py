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

for document in jobs.find():
	if(document['status'] == 'doing'):

		# UPDATING JOB TO EXECUTE (i.e setting status = 'doing')

		jobToExecute = document

		# with open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt', 'r') as fin:
		#     data = fin.read().splitlines(True)
		#     print len(data)
		#     i = 0
		#     while(i>0) :
		#     	if(str(data[i].strip())=="init"):
		#     		print "init:"
		#     	elif(str(data[i].strip())=="end"):
		#     		print "HA TERMINADO EXITOSAMENTE:"
		#     	else:
		#     		print "test:"
		#     		print i
		#     		with open('../python/printJob/printingResults/'+str(jobToExecute['_id'])+'.txt', 'w') as fout:
		#    				fout.writelines("funciona?")
		#    		i+=1
		   
		

		jobToExecute = document

		# NO BORRAR LO DE AQUI ABAJO

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
			"status": 'done',
			"finishTime": jobToExecute['finishTime'],
			"startTime": jobToExecute['startTime'],
			"creationDate": jobToExecute['creationDate'],
			"__v": jobToExecute['__v']
		}

		jobs.update_one({'_id':jobToExecute['_id']}, {"$set": post}, upsert=False)

				# NO BORRAR LO DE AQUI ABAJO

		# post = {

		# 	"_id": jobToExecute['_id'],
		# 	"name": jobToExecute['name'],
		# 	"description": jobToExecute['description'],
		# 	"Promoters": jobToExecute['Promoters'],
		# 	"RBS": jobToExecute['RBS'],
		# 	"CDS": jobToExecute['CDS'],
		# 	"Terminators": jobToExecute['Terminators'],
		# 	"coldzoneTemperature": jobToExecute['coldzoneTemperature'],
		# 	"coldzoneTime": jobToExecute['coldzoneTime'],
		# 	"hotzoneTemperature": jobToExecute['hotzoneTemperature'],
		# 	"hotzoneTime": jobToExecute['hotzoneTime'],
		# 	"idUser": jobToExecute['idUser'],
		# 	"executable": jobToExecute['executable'],
		# 	"status": 'toDo',
		# 	"finishTime": jobToExecute['finishTime'],
		# 	"startTime": jobToExecute['startTime'],
		# 	"creationDate": jobToExecute['creationDate'],
		# 	"__v": jobToExecute['__v']
		# }

		# jobs.update_one({'_id':jobToExecute['_id']}, {"$set": post}, upsert=False)
		break

		print "Job Finished"

	else:
		print "No jobs in execution"

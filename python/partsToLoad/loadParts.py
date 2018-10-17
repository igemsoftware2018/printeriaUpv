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


#Containers for the split methods

promArray = []
rbsArray = []
cdsArray = []
termArray = []
tuArray = []

#indexes

i = 0
j = 0
k = 0
w = 0
y = 0

#Looking for the CSV files

with open('csvParts/promoterlist.csv', 'rb') as a, open('csvParts/rbslist.csv', 'rb') as b, open('csvParts/cdslist.csv', 'rb') as c, open('csvParts/terminatorlist.csv', 'rb') as d, open('csvParts/tulist.csv', 'rb') as e:
    spamreader = csv.reader(a, delimiter=';', quotechar='|')
    spamreader2 = csv.reader(b, delimiter=';', quotechar='|')
    spamreader3 = csv.reader(c, delimiter=';', quotechar='|')
    spamreader4 = csv.reader(d, delimiter=';', quotechar='|')
    spamreader5 = csv.reader(e, delimiter=';', quotechar='|')
    for row in spamreader:
        promArray.append( ','.join(row))
        i = i+1
    for row in spamreader2:
        rbsArray.append( ','.join(row))
        j = j+1
    for row in spamreader3:
        cdsArray.append( ','.join(row))
        k = k+1
    for row in spamreader4:
        termArray.append( ','.join(row))
        w = w+1
    for row in spamreader5:
        tuArray.append( ','.join(row))
        y = y+1

# Printing the whole array and deleting the first row

for row in promArray:
    print row
    print '-----'
promArray.pop(0)

for row in rbsArray:
    print row
    print '-----'
rbsArray.pop(0)

for row in cdsArray:
    print row
    print '-----'
cdsArray.pop(0)

for row in termArray:
    print row
    print '-----'
termArray.pop(0)

for row in tuArray:
    print row
    print '-----'
tuArray.pop(0)

#Indexes to zero again

i = 0
j = 0
k = 0
w = 0
y = 0

#Split inside each row of each CSV

for row in promArray:
    promArray[i] = row.split(",")
    i = i+1

for row in rbsArray:
    rbsArray[j] = row.split(",")
    j = j+1

for row in cdsArray:
    cdsArray[k] = row.split(",")
    k = k+1

for row in termArray:
    termArray[w] = row.split(",")
    w = w+1

for row in tuArray:
    tuArray[y] = row.split(",")
    y = y+1

#Inserting Final elements in DB

print "-----------------------"
print "-----------------------"
print "-----------------------"
print "-----------------------"
print "-----------------------"
print "-----------------------"
print "-----------------------"


for row in promArray:
    "Element to insert"
    promObj = []
    # print row
    for value in row:
        promObj.append(value)
    promoters.insert(
    {
    "_id" : ObjectId(),
    "name" : promObj[0],
    "description" : promObj[1],
    "category" : promObj[2],
    "type" : promObj[3],
    "lengthBP" : promObj[4],
    "quantity" : promObj[5],
    "r" : promObj[6],
    "dm" : promObj[7],
    "date" : datetime.utcnow(),
    "idUser" : ObjectId(admin)
    }
)

for row in rbsArray:
    "Element to insert"
    rbsObj = []
    # print row
    for value in row:
        rbsObj.append(value)
    rbsses.insert(
    {
    "_id" : ObjectId(),
    "name" : rbsObj[0],
    "description" : rbsObj[1],
    "category" : rbsObj[2],
    "lengthBP" : rbsObj[3],
    "quantity" : rbsObj[4],
    "date" : datetime.utcnow(),
    "idUser" : ObjectId(admin)
    }
)

for row in cdsArray:
    "Element to insert"
    cdsObj = []
    # print row
    for value in row:
        cdsObj.append(value)
    cdsses.insert(
    {
    "_id" : ObjectId(),
    "name" : cdsObj[0],
    "description" : cdsObj[1],
    "type " : cdsObj[2],
    "lengthBP" : cdsObj[3],
    "quantity" : cdsObj[4],
    "dp" : cdsObj[5],
    "p" : cdsObj[6],
    "date" : datetime.utcnow(),
    "idUser" : ObjectId(admin)
    }
)

for row in termArray:
    "Element to insert"
    termObj = []
    # print row
    for value in row:
        termObj.append(value)
    terminators.insert(
    {
    "_id" : ObjectId(),
    "name" : termObj[0],
    "description" : termObj[1],
    "category" : termObj[2],
    "lengthBP" : termObj[3],
    "quantity" : termObj[4],
    "date" : datetime.utcnow(),
    "idUser" : ObjectId(admin)
    }
)

partsObj = []

for row in tuArray:
    "Element to insert"
    auxObj = []
    # print row
    for value in row:
        auxObj.append(value)
    auxObj.pop(0)
    auxObj.pop(0)
    auxObj.pop()
    auxObj.pop()
    auxObj.pop()
    auxObj.pop()
    print auxObj
    partsObj.append(auxObj)


for row in tuArray:
    "Element to insert"
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
    recipes.insert(
    {
    "_id" : ObjectId(),
    "name" : tuObj[0],
    "description" : tuObj[1],
    "Promoters" : prom,
    "RBS" : rbs,
    "CDS" : cds,
    "Terminators" : term,
    "coldzoneTemperature" : tuObj[6],
    "coldzoneTime" : tuObj[7],
    "hotzoneTemperature" : tuObj[8],
    "hotzoneTime" : tuObj[9],
    "date" : datetime.utcnow(),
    "idUser" : ObjectId(admin)
    }
    )






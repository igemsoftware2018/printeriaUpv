import os
import sys
import csv

argString = sys.argv[1]
jobName = argString


# with open('python/printJob/printingResults/'+jobId+'/csvTest.csv') as f:
#     s = f.read() # add trailing new line character

# with open('python/printJob/printingResults/'+jobId+'/csvTest.csv') as csv_file:
#     csv_reader = csv.reader(csv_file, delimiter=',', quotechar='|')
#     testArray=[]
#     test=""
#     for row in csv_reader:
#     	for element in row:

# with open('python/printJob/printingResults/'+jobId+'/csvTest.csv') as File:  
#     reader = csv.reader(File)
#     for row in reader:
#         print(row)

with open('python/printJob/printingResults/'+jobName+'/FOD.csv') as f:
    reader = csv.reader(f)
    test = []
    for row in reader:
        test.append(",".join(row))
    for row in test:
    	print row
print "lineBreak"
with open('python/printJob/printingResults/'+jobName+'/OD.csv') as f:
    reader = csv.reader(f)
    test = []
    for row in reader:
        test.append(",".join(row))
    for row in test:
    	print row
    # print "lineBreak"
    # for row in test:
    # 	print row



# 'a,b,c\nd,e,f\ng,h,i\n'
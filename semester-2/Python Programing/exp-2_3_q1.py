student_dict={}
avgDict={}

n=int(input("Enter the Number of student's records:"))
for i in range(n):
    print("RECORD:",i+1)
    name = input("Enter Name:") # here i have taken keys as strings
    mark1= int(input("Enter mark1:"))# here i have taken values as integers
    mark2= int(input("Enter mark2:"))
    mark3= int(input("Enter mark3:"))
    sum=0
    avg=0
    marks=(mark1,mark2,mark3)
    student_dict[name] = marks
    sum=mark1+mark2+mark3
    avg=sum/3
    avgDict[name]=avg
print(student_dict)
print(avgDict)

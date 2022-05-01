l=[]
for i in range(0,6):
    num=input("enter element")
    l.append(num)
lg=l[0]
lg1=l[1] 
for x in l:
    if(x>lg):
        lg1=lg
        lg=x
    elif(x>lg1 and x<lg):
        lg1=x    
print(lg1)

4 lg
2 lg1=4 
1
5


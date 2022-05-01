st=input("input string")
for x in range(65,91):
    c=0
    ch=chr(x)
    for y in st:
        if ch==y or ch==y.upper():
            c+=1
    if c>0:        
         print(ch,":",c)



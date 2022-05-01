str=input("enter string")
wd=str.split()
l=len(wd)
lwd=wd[l-1]
for x in range(0,l-1):
    s=wd[x]
    print(s[0],end=".")
print(lwd)
    

# Write a program that takes your full name as input and displays the abbreviations of the first 
# and middle names except the last name which is displayed as it is. For example, if your name is 
# Robert Brett Roser, then the output should be R.B.Roser.

# str=input("enter string")
# wd=str.split()
# l=len(wd)
# lwd=wd[l-1]
# for x in range(0,l-1):
#     s=wd[x]
#     print(s[0],end=".")
# print(lwd)

st=input("input string")
for x in range(65,91):
    c=0
    ch=chr(x)
    for y in st:
        if ch==y or ch==y.upper():
            c+=1
    if c>0:        
         print(ch,":",c)
         

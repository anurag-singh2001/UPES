f=open("city.txt","r")
s=f.readlines()
for x in s:
    s=x.split()
    if (int)(s[1])>1000000:

        print(x)


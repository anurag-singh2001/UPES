l=0
f=open("TestFile1.txt","r")
s=f.read()
print(s)
st=""
for x in range(0,len(s)):
     if s[x]=='\"':

         for j in range(x+1,len(s)):

             if s[j]=='\"':

                 l=j
                 st=s[0:x-1]+"\\"+s[x:l]+"\\"+s[l:]

                 break
print(st)
a=open("TextFile2.txt","w")
a.write(st)
f.close()
a.close()




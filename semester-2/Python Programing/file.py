# f=open("myfile.txt","r")
# print(f.read())
# print(f.read(5))
# print(f.readline())
# print(f.readline())
# print(f.readline())
# for x in f:
#     print(x)
# f=open("myfile.txt","a")
# f.write("my name is anurag")
# f.close()

# f=open("myfile.txt","r")
# print(f.read())

f=open("myfile.txt","w")
f.write("content deleted")
f=open("myfile.txt","r")
print(f.read())



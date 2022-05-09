# def implication(a,b):
#     return not int(a) or b        
# print("enter value of p")
# p=[]
# q=[]
# for i in range(4):
#     n=int(input("enter value"))
#     p.append(n)
    
# print("enter value of q")
# for i in range(4):
#     b=int(input("enter value"))
#     q.append(b)
# print(p,q)
# print("----------Implication Truth Table----------")
# print(" ")
# print("    a     b  |  c")
# print("-"*50)
# for i in range(4):
#     print(f"%5d %5d %5d "%(p[i],q[i], implication(p[i],q[i])))

# def XOR (a,b):
#     return a ^ b

# def start_1():
#     print("----------XOR----------")
#     print(" ")
#     print("    a     b  |  c")
#     print("------------------")
#     for a in [0,1]:
#         for b in [0,1]:
#             print(f"%5d %5d %5d "%(a,b, XOR(a,b)))

# start_1()
# print("-"*100)    

email=input("enter the email: ").lower()
ending=email[-10:]
if(ending=="@gmail.com" and' ' not in email and len(email)>=6 and len(email)<=30 and email[0].isalnum() ):
    print("entered  email is valid")
else:
    print("entered  email is not valid")
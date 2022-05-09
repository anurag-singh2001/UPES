import random
try:
    option=[1,0]
    n=random.choice(option)
    chance=0
    l=0
    w=0
    while(chance<5):
        user=int(input("Enter 0 or 1\n"))
        if(user==n):
            w+=1
            print("got a point\n")
        else:
            l+=1
            print("lose a point\n")
        chance+=1
    if(w>l):
        print("won a game\n")
    elif(w<l):
        print("lose a game\n")    
    else:
        print("game tie\n")    
    
except:
    print("wrong input")


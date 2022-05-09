try:
    start=int(input("enter range"))
    end=int(input("enter range"))
    if(start>end):
        exit()
    for i in range(start,end+1):
        print(i,end="")
        if(i%3==0):
            print("Neo ",end=" ")
        if(i%5==0):
            print("New ",end=" ")
        print()   
except:
    print("Error")             


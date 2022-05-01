def Fibonaaci():
    n=int(input("enter the nth value:"))
    count=0
    n1=0
    n2=1
    if n<=0:
        print("enter number greater than 0")
    elif n==1:
        print(n1)
    else:
        print("Fibonaaci series:")
        while count<n:
            print(n1)
            a=n1+n2
            n1=n2
            n2=a
            count+=1

Fibonaaci()

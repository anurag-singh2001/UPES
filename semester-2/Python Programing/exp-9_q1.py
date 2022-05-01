n=int(input("Enter the Number of test cases:"))
while(n!=0):

    try:
       a=int(input("enter number 1"))
       b=int(input("enter number 2"))
       c=a//b
       print(c)
    except Exception as e:
        print(e)    
    n=n-1  

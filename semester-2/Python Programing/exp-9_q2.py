mylist=[1,2,3,"4",5]
sum=0
for i in mylist:
    try:

        sum=sum+i
    except Exception as e:
        print(sum)
        print(e)    


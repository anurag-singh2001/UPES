class Employee:
    fname=input("enter first name:")
    lname=input("enter last name:")
    pay=int(input("enter your pay:"))
    email=fname+'.'+lname+'@company'

emp = Employee()
print(f"First name: {emp.fname}")
print(f"Last name: {emp.lname}")
print(f"pay: {emp.pay}")
print(f"email: {emp.email}")

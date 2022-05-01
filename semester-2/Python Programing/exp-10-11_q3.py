class Account:
    def __init__(self,initial_amount):
        self.ballance = initial_amount
    
    def deposit(self,amount):
        self.ballance = self.ballance + amount
        return self.ballance

    def withdrawl(self,amount):
        self.ballance = self.ballance - amount 
        return self.ballance


ac = Account(1000)
x = Account.deposit(ac,2000)
y = Account.withdrawl(ac,1000)

print("\n\nInitial amount...",1000)

print("\nAfter Deposit total amount...",x) # 1000 + 2000

print("\nAfter Withdrawl the amount left...",y) # 3000 - 1000 

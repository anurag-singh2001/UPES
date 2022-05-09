name='Anurag Singh'
sapid=500083382
print(f"My Name is {name} and my SAP ID is {sapid}\n")
def OR (a,b):
    return a or b

def start_1():
    print("----------OR Truth Table----------")
    print(" ")
    print("    a     b  |  c")
    print("------------------")
    for a in [0,1]:
        for b in [0,1]:
            print(f"%5d %5d %5d "%(a,b, OR(a,b)))

start_1()
print("-"*100)



def AND (a,b):
    return a and b

def start_2():
    print("----------AND Truth Table----------")
    print(" ")
    print("    a     b  |  c")
    print("-"*50)
    for a in [0,1]:
        for b in [0,1]:
            print(f"%5d %5d %5d "%(a,b, AND(a,b)))

start_2()
print("-"*100)




def NOT(a):
    return not int(a)

def start_3():
    print("----------NOT Truth Table----------")
    print(" ")
    print("    a  |  c")
    print("-"*50)
    for a in [0,1]:
        print(f"%5d %5d "%(a,NOT(a)))

start_3()
print("-"*100)


def implication(a,b):
    return not int(a) or b

def start_4():
    print("----------Implication Truth Table----------")
    print(" ")
    print("    a     b  |  c")
    print("-"*50)
    for a in [0,1]:
        for b in [0,1]:
            print(f"%5d %5d %5d "%(a,b, implication(a,b)))

start_4()
print("-"*100)            


def biconditional(a,b):
    return (a and b) or not(a or b)

def start_5():
     print("----------Biconditional Truth Table----------")
     print(" ")
     print("    a     b  |  c")
     print("-"*50)
     for a in [0,1]:
         for b in [0,1]:
             print(f"%5d %5d %5d "%(a,b,biconditional(a,b)))

start_5()
print("-"*100)

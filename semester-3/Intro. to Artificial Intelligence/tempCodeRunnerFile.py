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
name='Anurag Singh'
sapid=500083382
print(f"My Name is {name} and my SAP ID is {sapid}\n")
print()

def execute_negation(m):
    l=[]
    for i in m:
        l.append(not i)
    return (l)
def execute_disjunction(m,n):      #using this only for Tautology
    l=[]
    for i in m:
        for j in n:
            l.append(i or j)
    return l
def execute_disjunction1(p,q):    #using this only for contigency
    for i in p:
        for j in q:
            print(i, "or",j, "is:", i or j)

def execute_conjunction(m,n):
    l=[]
    for i in m:
        for j in n:
            l.append(i and j )
    return l

print("TAUTOLOGY")
p=[True]
q=[False]
notp = execute_negation(p)
notq = execute_negation(q)
result1=execute_disjunction(p,notp)
result2=execute_disjunction(q,notq)
result=result1+result2
print("P:",p, "~P:",notp,"P V ~P:",result1)
print("P:",q, "~P:",notq,"P V ~P:",result2)
print("SATISFIABLITY : The above program is Satisfiable as result is true for at least one set of P and ~P")

print("\nCONTRADICTION")
p=[True]
q=[False]
notp = execute_negation(p)
notq = execute_negation(q)
result1=execute_conjunction(p,notp)
result2=execute_conjunction(q,notq)
result=result1+result2
print("P:",p, "~P:",notp,"P ^ ~P:",result1)
print("P:",q, "~P:",notq,"P ^ ~P:",result2)
print("SATISFIABLITY: The above program is Unsatisfiable as result is not true for even one set of P and ~P")

print("\nCONTINGENCY")
p=[True,False]
q=[True,False]
execute_disjunction1(p,q)
print("SATISFIABLITY : The above program is Satisfiable as result is true for at least one set of P and Q")
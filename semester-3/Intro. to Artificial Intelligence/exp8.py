name='Anurag Singh'
sapid=500083382
print(f"My Name is {name} and my SAP ID is {sapid}\n")
print()

#perceptron model
import numpy as np
def unitStep(v):
    if v>=0:
        return 1
    else:
        return 0

def or_perceptronModel(x,w,b):
   v=np.dot(w,x)+b
   v=unitStep(v)
   return v

def OR_logicFunction(x):
   w=np.array([1,1])
   b=-0.5
   return or_perceptronModel(x,w,b)

test1=np.array([0,1])
test2=np.array([1,1])
test3=np.array([0,0])
test4=np.array([1,0])

print("OR ({},{}) = {}".format(0,1,OR_logicFunction(test1)))
print("OR ({},{}) = {}".format(1,1,OR_logicFunction(test2)))
print("OR ({},{}) = {}".format(0,0,OR_logicFunction(test3)))
print("OR ({},{}) = {}".format(1,0,OR_logicFunction(test4)))

def and_perceptronModel(x,w,b):
   v=np.dot(w,x)+b
   v=unitStep(v)
   return v
def AND_logicFunction(x):
   w=np.array([1,1])
   b=-1.5
   return and_perceptronModel(x,w,b)

test5=np.array([0,1])
test6=np.array([1,1])
test7=np.array([0,0])
test8=np.array([1,0])
print("\n")
print("AND ({},{}) = {}".format(0,1,AND_logicFunction(test5)))
print("AND ({},{}) = {}".format(1,1,AND_logicFunction(test6)))
print("AND ({},{}) = {}".format(0,0,AND_logicFunction(test7)))
print("AND ({},{}) = {}".format(1,0,AND_logicFunction(test8)))

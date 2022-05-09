my_set={1,3}
print(my_set)
#my_set[0]
my_set.add(2)
print(my_set)

my_set.update([1,2,3,4])
print(my_set)
my_set.update([4,5],{1,6,8})
print(my_set)

my_set.remove(6)
print(my_set)

my_set.remove(2)
print(my_set)

my_set.discard(2)
print(my_set)


a={1,2,3,4,5}
b={4,5,6,7,8}
# a={1,2,3,4,5}
# b={6,7,8}
print(a|b)
print(a&b)
print(a-b)
print(a^b)


x = True
y = False
print('x and y is',x and y)
print('x or y is',x or y)
print('not x is',not x)

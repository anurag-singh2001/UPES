import numpy as np

#arr = np.array([1, 2, 3, 4, 5])

#print(arr)
#print(np.__version__)
#arr = np.array(42)
#arr = np.array([[1, 2, 3],[4, 5, 6]])
#arr = np.array([[[1, 2, 3], [4, 5, 6]], [[1, 2, 3], [4, 5, 6]]])
# a = np.array(42)
# b = np.array([1, 2, 3, 4, 5])
# c = np.array([[1, 2, 3], [4, 5, 6]])
# d = np.array([[[1, 2, 3], [4, 5, 6]], [[1, 2, 3], [4, 5, 6]]])
# #print(arr)
# print(a.ndim)
# print(b.ndim)
# print(c.ndim)
# print(d.ndim)
# arr = np.array([1, 2, 3, 4])
# print(arr[2] + arr[3])
# arr = np.array([[1,2,3,4,5], [6,7,8,9,10]])
# print('2nd element on 1st dim: ', arr[0, 1])
# print('5th element on 2nd dim: ', arr[1, 4])
# arr = np.array([[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]])
# print(arr[0, 1, 2])

# The first number represents the first dimension, which contains two arrays:

# [[1, 2, 3], [4, 5, 6]]

# and:

# [[7, 8, 9], [10, 11, 12]]

# Since we selected 0, we are left with the first array:

# [[1, 2, 3], [4, 5, 6]]

# The second number represents the second dimension, which also contains two arrays:

# [1, 2, 3]

# and:

# [4, 5, 6]

# Since we selected 1, we are left with the second array:

# [4, 5, 6]

# The third number represents the third dimension, which contains three values:

# 4

# 5

# 6

# Since we selected 2, we end up with the third value:

# 6

# Slicing in python means taking elements from one given index to another given index.

# We pass slice instead of index like this: [start:end].

# We can also define the step, like this: [start:end:step].

# If we don't pass start its considered 0

# If we don't pass end its considered length of array in that dimension

# If we don't pass step its considered 1
# arr = np.array([1, 2, 3, 4, 5, 6, 7])
# print(arr[1:5])
# arr = np.array([1, 2, 3, 4, 5, 6, 7])
# print(arr[-3:-1])
# arr = np.array([1, 2, 3, 4, 5, 6, 7])
# print(arr[1:5:2])
# arr = np.array([1, 2, 3, 4, 5, 6, 7])
# print(arr[::2])

# NumPy has some extra data types, and refer to data types with one character, like i for integers, u for unsigned integers etc.

# Below is a list of all data types in NumPy and the characters used to represent them.

# i - integer

# b - boolean

# u - unsigned integer

# f - float

# c - complex float

# m - timedelta

# M - datetime

# O - object

# S - string

# U - unicode string

# V - fixed chunk of memory for other type ( void )



# arr = np.array([1, 2, 3, 4], dtype='S')

# print(arr)

# print(arr.dtype)

# arr = np.array([1, 2, 3, 4], dtype='S')

# print(arr)

# print(arr.dtype)

# arr = np.array([1, 2, 3, 4], dtype='i4')

# print(arr)

# print(arr.dtype)

# arr = np.array([1, 2, 3, 4, 5])

# x = arr.copy()

# arr[0] = 42



# print(arr)

# print(x)
# arr = np.array([1, 2, 3, 4, 5])
# x = arr.view()
# arr[0] = 42
# print(arr)
# print(x)

# arr = np.array([1, 2, 3, 4, 5])
# x = arr.view()
# x[0] = 31
# print(arr)
# print(x)

# arr = np.array([1, 2, 3, 4, 5])
# x = arr.copy()
# y = arr.view()
# print(x.base)
# print(y.base)

# arr = np.array([[1, 2, 3, 4], [5, 6, 7, 8]])
# print(arr.shape)

# arr = np.array([1, 2, 3, 4], ndmin=5)
# print(arr)
# print('shape of array :', arr.shape)

# arr = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12])
# newarr = arr.reshape(4, 3)
# print(newarr)

# arr = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12])
# newarr = arr.reshape(2, 3, 2)
# print(newarr)

# arr = np.array([1, 2, 3, 4, 5, 6, 7, 8])
# newarr = arr.reshape(2, -1, 2)
# print(newarr)

# arr = np.array([[1, 2, 3], [4, 5, 6]])
# newarr = arr.reshape(-1)
# print(newarr)

# arr = np.array([1, 2, 3])
# for x in arr:
#  print(x)

# arr = np.array([[1, 2, 3], [4, 5, 6]])
# for x in arr:
#  print(x)

# arr = np.array([[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]])
# for x in arr:
#  print(x)

# arr = np.array([[1, 2, 3], [4, 5, 6]])

# for x in arr:

#  for y in x:

#   print(y)

# arr = np.array([[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]])
# for x in arr:

#  for y in x:

#   for z in y:

#    print(z)

# arr = np.array([[[1, 2], [3, 4]], [[5, 6], [7, 8]]])
# for x in np.nditer(arr):
#  print(x)

# arr1 = np.array([1, 2, 3])
# arr2 = np.array([4, 5, 6])
# arr = np.concatenate((arr1, arr2))
# print(arr)

# arr = np.array([1, 2, 3, 4, 5, 6])
# newarr = np.array_split(arr, 3)
# print(newarr)

# arr = np.array([1, 2, 3, 4, 5, 6])
# newarr = np.array_split(arr, 4)
# print(newarr)

# arr = np.array([1, 2, 3, 4, 5, 6])
# newarr = np.split(arr, 4)
# print(newarr)

# arr = np.array([1, 2, 3, 4, 5, 4, 4])
# x = np.where(arr == 4)
# print(x)

# arr = np.array([1, 2, 3, 4, 5, 6, 7, 8])
# x = np.where(arr%2 == 0)
# print(x)

# arr = np.array([1, 2, 3, 4, 5, 6, 7, 8])
# x = np.where(arr%2 == 1)
# print(x)

# arr = np.array([6, 7, 8, 9])
# x = np.searchsorted(arr, 7, side='right')
# print(x)

# Q1.
# a. Convert numbers =[1, 2.0, 3] to numpy array and convert all elements to string type. 
# b. Create a 2 D array through list and set dtype as int32 
# c. Find the rows and columns of the 2d array created in part b 
# d. Print 10 random numbers between 1 and 100.
# Q2. 
# a)      Write a NumPy program to get help on the add function
# b)     Write a NumPy program to test whether none of the elements of a given array is zero
# c)      Write a NumPy program to test whether any of the elements of a given array is non-zero
# Write a NumPy program to generate an array of 15 random numbers from a standard normal distribution

# WAP to find second largest number from the list 
# l = [1,2,3,57,7,43,2]
# lar = l[0]
# secondLar = l[0]
# for x in l:
#     if lar<x:
#         secondLar = lar
#         lar = x
#     elif secondLar<x:
#         secondLar=x

# print(secondLar)


# a tuple is a heterogenous collection of elements

#creating tuple -> 1
a = (10,20.44,True)
print(type(a))
print(a)
b = 5,2,3

print(type(b))

#nested tuple
t1 = (10,44,False)
t2 = ("a","z",10.22)
t3 = ("abc",True,123)

t4 = (t1,t2,t3)
print(t4[1])

#we cannot delete or remove
# element from tuple 
# we can delete the whole tuple using
# the del keyword
# we can access a range of elements
# from a tuple by using the slicing 
# we can access a range of elements
# by using a slicing

t1 = (10,20,30,40,True,"ab","xyz")

print(t1[2:5])
print(t1[:])
print(t1[::2])
print(t1[2,6,2])

# we can use + operator to combine two tuples
# we can compare the elements of tuple
# using comparision operator



# function with tuples

# we can access the number of values in the tuple using len()
# we can access the min and max value of the tuple using 
# the min and max function and passing it as parameter
# min(tuple) and max(tuple)
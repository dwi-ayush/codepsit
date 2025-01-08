# str = " LSLS"
# print(str.count("LS"))

'''
functions:
str.islower()
str.isupper()
str.iscapitalize()
str.lower()
find() method is almost the same as the index
but find() gives -1 when it can't find substring
but index() gives an error when it can't find the substring
'''

str = input("Enter a string:")
cap = 0
low = 0
num = 0
alp = 0
spe = 0
spa = 0
for x in str:
    if x.isalnum():
        if x.isdigit():
            num+=1
        else:
            alp+=1
            if x.isupper():
                cap+=1
            else:
                low+=1
    else:
        if x.isspace():
            spa+=1
        else:
            spe+=1

print("captial letter:",cap)
print("lower letter:",low)
print("numbers :",num)
print("alphabets :",alp)
print("special characteer :",spe)
print("spaces :",spa)
# try:
#     a = 5
#     b = '0'
#     print(a+b)
# except Exception as e:
#     print('error',e)

# x = 1
# y = 0
# assert y!=0,"Invalid Operation"
# print(x/y)
selfmadeexception = NameError
try:
    num = 10
    deno = int(input("Enter a number:"))
    if deno==0:
        raise selfmadeexception
    print("your deno is :",deno)

except selfmadeexception:
    print("Something went wrong")

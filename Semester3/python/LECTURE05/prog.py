# if an applicant has high income
# and has high credit else no loan

# high_income = True
# high_credit = False
# if high_income or high_credit:
#     print("loan passed")
# else:
#     print("loan not passed")


arr = [1,7,7,3,4,345,345,3,45,7,5]
for i in range (1,len(arr)):
    j= i-1
    key = arr[i]
    while arr[i]>arr[j]:
        arr[j+1] = arr[j]
        j-=1
    arr[j+1] = key

for x in arr:
    print(x,end =" ")


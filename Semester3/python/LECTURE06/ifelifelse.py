# x=input()
# y=input()
# if x>y:
#     print(x)
# else:
#     print(y)

import random
x= random.randint(1,100)
y= random.randint(1,100)
z= random.randint(1,100)
if x>y:
    if z>x:
        print("Z is the biggest")
    else:
        print("x is biggest")
else: 
    if(z>y):
        print("Y is the biggest")
    else:
        print("y is the biggest")


number = random.randint(-100,400)
if number>=0 and number<=100:
    pass

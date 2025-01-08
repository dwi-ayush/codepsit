#write a program and check whether a number is perfect or not
#input from user and write code using function


def perfect(n:int) -> bool:
    i = 1
    sum = 0
    while i<n:
        if (n%i == 0):
            sum+=i
        i+=1
    return sum == n
def pangram(string:str) -> bool:
    freq = [0]*26
    for x in string:
        x = x.lower()
        if (x.isalpha()):
            freq[ord(x)-ord('a')] += 1
    for f in freq:
        if f<1:
            return False
    return True
        


# n = int(input("Enter a number to check whether perfect or not:"))
# if perfect(n):
#     print("number is perfect")
# else:
#     print("Number is not perfect")

sentence = input("Enter a sentence to check:")
if (pangram(sentence)):
    print("Sentence is Pangram")
else:
    print("Sentence is not Pangram")


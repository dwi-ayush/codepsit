
# list = ["a","b","c"]
# result = ", ".join(list)
# print(result)
# x='166'
# print(x.isdigit())

# text = "one, two, three, four"
# result = text.split(", ",maxsplit=3)
# print(result)




a = "Armaan"

a = a[-1] + a[1:len(a)-1] + a[0]
print(a)

sent = "this is a string and this is a sentence and we are going to find the"

m = 0
for x in sent.split():
    m = max(m,len(x))
print(m)
# Write a program to find a maximum of given three 
# numbers.

a = int(input("Enter value of a: "))
b = int(input("Enter value of b: "))
c = int(input("Enter value of c: "))

# if (a > b) and (a > c):
#     print("a is greater")
# elif b > c:
#     print("b is greater")
# else:
#     print("c is greater")

max = a if ((a > b) and (a > c)) else (b if (b > c) else c)
print("Max:",max)

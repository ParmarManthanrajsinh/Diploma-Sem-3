# l = ["manthan", "sakura", "naruto", "kratos", "mann"]

# for i in l:
#     if i[0] == "n":
#         print(i)

# num = int(input("Enter a number: "))
# c = 0

# for i in range(2, int(num / 2) + 1):
#     if num % i == 0:
#         c += 1
# if c > 0:
#     print("Number is not prime")
# else:
#     print("Number is prime")

# num = int(input("Enter a number: "))
# fact = 1

# while num >= 1:
#     fact *= num
#     num -= 1

# print("Factorial of is : ", fact)


num = int(input("Enter a number: "))
# c = 0

# for i in range(num):
#     print(" " * (num - i), end="")
#     print("*" * (1 + c), end="")
#     c += 2
#     print()

# print("*" * num)
# for i in range(num - 2):
#     for j in range(num):
#         if j == 0 or j == num - 1:
#             print("*", end="")
#         else:
#             print(" ", end="")
#     print()
# print("*" * num)

for i in range(10,0,-1):
    print(f"{num} X {i} = {num * i}")

# Write a program to eliminate duplicate values in the list.

List = []

n = int(input("Enter lenght of list: "))

for i in range(n):
    print("Enter the element", i + 1, ": ")
    num = int(input())
    List.append(num)

print(List)

List = list(set(List))

print(List)

# Write a program to read n numbers from a user and print:
# ● Number of positive numbers.
# ● Number of negative numbers.
# ● Number of zeros.
# ● Number of odd numbers.
# ● Number of even numbers.
# ● Average of all numbers.

num = int(input("Enter the number of elements: "))

arr = []

p = 0
n = 0
zero = 0
odd = 0
even = 0
avg = 0
sum = 0


for i in range(num):
    print("Enter the element", i+1, ": ")
    ind = int(input())
    arr.append(ind)
    sum += ind

for i in arr:
    if i > 0:
        p += 1
    if i < 0:
        n += 1
    if i == 0:
        zero = 0
    if (i % 2) == 0:
        even += 1
    else:
        odd += 1

avg = sum / num

print("Number of positive numbers: ",p)
print("Number of positive negative: ",n)
print("Number of zeros: ",zero)
print("Number of odd numbers: ",odd)
print("Number of even numbers: ",even)
print("Average of all numbers: ",avg)





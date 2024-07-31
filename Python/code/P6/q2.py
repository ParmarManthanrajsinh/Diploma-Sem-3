# Write a program to read n numbers from a user and print:
# ● Number of positive numbers.
# ● Number of negative numbers.
# ● Number of zeros.
# ● Number of odd numbers.
# ● Number of even numbers.
# ● Average of all numbers.

num = int(input("Enter the number of elements: "))

arr = []

p = n = zero = odd = even = avg = sum = 0


for i in range(num):
    print("Enter the element", i + 1, ": ",end='')
    ind = int(input())
    arr.append(ind)
    sum += ind

    if ind > 0:
        p += 1
    if ind < 0:
        n += 1
    if ind == 0:
        zero = 0
    if (ind % 2) == 0:
        even += 1
    else:
        odd += 1

avg = sum / num

print("Number of positive numbers: ", p)
print("Number of negative numbers: ", n)
print("Number of zeros: ", zero)
print("Number of odd numbers: ", odd)
print("Number of even numbers: ", even)
print("Average of all numbers: ", avg)

# Write a program to read n numbers from users and
# calculate the average of those n numbers.

n = int(input("Enter the number of elements: "))
sum = 0

for i in range(n):
    print("Enter number ", i, ":")
    num = int(input())
    sum += num

avg = sum / n
print("Average of the numbers is:", avg)

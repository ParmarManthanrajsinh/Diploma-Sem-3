# Write a program to calculate simple and compound 
# interest.

import math

P = float(input("Enter the principal amount: "))
R = float(input("Enter the annual interest rate (in %): "))
T = float(input("Enter the time period (in years): "))
n = float(input("Enter the number of times intrest is compounded per year: "))

ans = (P * R * T) / 100

print("The simple interest is:", ans)

ans = P*(math.pow((1 + (R/100*n)) , n*T))

print("The Compound interest is:", ans)
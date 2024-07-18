# Write a program that computes the real roots of a
# given quadratic equation (Use math library).
#
# D𝑖𝑠𝑐𝑟𝑖𝑚𝑖𝑛𝑎𝑛𝑡 𝛥 = 𝑏2 − 4 𝑎 𝑐
#
# R𝑒𝑎𝑙 𝑅𝑜𝑜𝑡𝑠  = −𝑏 ± √𝛥 / 2 𝑎

import math

a = float(input("Enter the value of a: "))
b = float(input("Enter the value of b: "))
c = float(input("Enter the value of c: "))

d = (b * b) - (4 * a * c)

if d > 0:
    x1 = (-1 * b) + math.sqrt(d) / 2 * a
    x2 = (-1 * b) - math.sqrt(d) / 2 * a
    print(x1, x2)
else:
    print("no real root found")
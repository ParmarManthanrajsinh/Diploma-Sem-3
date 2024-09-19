# Write  a program that defines  a function  to  determine  whether  input  number  n  is
# prime or not. A positive whole number n > 2 is prime, if no number between 2 and
# √𝑛 (inclusive) evenly divides n. If n is not prime, the program should quit as soon as
# it finds a value that evenly divides n.

import math

def prime(n):
    if n < 2:
        return False

    i = 2
    while i <= math.isqrt(n):
        if n % i == 0:
            return False
        i += 1

    return True


n = int(input("Enter a number: "))
if prime(n):
    print("prime number")
else:
    print("not a prime number")

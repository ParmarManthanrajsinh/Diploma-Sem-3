# Write  a  program  to  print  Fibonacci  sequence  up  to  n  numbers  using  recursion.
# Fibonacci sequence is defined as below:
# 𝐹𝑖𝑏𝑜𝑛𝑎𝑐𝑐𝑖 𝑆𝑒𝑞𝑢𝑒𝑛𝑐𝑒= 1 1 2 3 5 8 13 21...


def Fibonacci(n):
    if n <= 1:
       return n
    else:
       return (Fibonacci(n-1) + Fibonacci(n-2))

n = int(input("Enter a number: "))

for i in range(n):
   print(Fibonacci(i), end=" ")
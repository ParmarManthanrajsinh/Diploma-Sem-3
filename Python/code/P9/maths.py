def addition(x, y):
    return x + y


def subtraction(x, y):
    return x - y


def multiplication(x, y):
    return x * y


def division(x, y):
    return x / y


def modulo(x, y):
    return x % y


def square(n, p):
    return n**p


def factorial(n):
    if n == 1:
        return 1
    else:
        return n * factorial(n - 1)

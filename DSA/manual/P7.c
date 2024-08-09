#include <stdio.h>

// To find factorial of a given number using recursion.
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}

// To find GCD of a given number using recursion.
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    printf("factorial of 5 is: %d\n", factorial(5));
    printf("GCD of 12 and 66 is: %d\n", gcd(12, 66));

    return 0;
}
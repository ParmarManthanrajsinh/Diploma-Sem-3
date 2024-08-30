#include <stdio.h>

void substr(char str[], int e, int n)
{
    char sub[n];
    int i = 0;

    while (i < n)
    {
        sub[i] = str[e + i];
        i++;
    }
    sub[n] = '\0';
    printf("substring is %s", sub);
}

int main()
{
    char str[] = "Hello, World!";
    substr(str, 7, 5);

    return 0;
}
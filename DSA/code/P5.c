// Algorithm counts the length of the given string.

#include <stdio.h>

int STRLEN(char str[])
{
    int c = 0;

    while (str[c] != '\0')
    {
        c++;
    }
    return c;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);
    printf("The length of the string is: %d", STRLEN(str));

    return 0;
}
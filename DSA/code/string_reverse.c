#include <stdio.h>
#include <string.h>

void STRREV(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[] = "Hello!";
    STRREV(str);
    printf("%s", str);

    return 0;
}
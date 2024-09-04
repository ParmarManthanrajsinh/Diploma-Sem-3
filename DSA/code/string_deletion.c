#include <stdio.h>

void string_delete(char str[], int pos, int n)
{
    int i = pos;
    while (str[i + n] != '\0')
    {
        str[i] = str[i + n];
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char str[100] = "Hello, PythonWorld!";
    string_delete(str, 7, 6);
    printf("%s\n", str);

    return 0;
}
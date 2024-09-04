#include <stdio.h>

void string_insert(char str[], int pos, char text[])
{
    int i = 0, j = pos;
    char temp[100];
    while (text[i] != '\0')
    {
        temp[i] = str[j];
        str[j] = text[i];
        i++;
        j++;
    }
    temp[i] = '\0';
    i = 0;
    while (temp[i] != '\0')
    {
        str[j] = temp[i];
        i++;
        j++;
    }
    str[j] = '\0';
}

int main()
{
    char str[100] = "Hello, World!";
    char text[] = "Python";
    string_insert(str, 7, text);
    printf("%s\n", str);

    return 0;
}
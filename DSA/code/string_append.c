#include <stdio.h>
#include <string.h>

#include <string.h>

void STR_APPEND(char str[], char text[])
{
    int i = strlen(str);
    int k = 0;

    while (text[k] != '\0')
    {
        str[i] = text[k];
        i++;
        k++;
    }
    str[i] = '\0';
}

int main()
{
    char str[100], text[100];

    printf("Enter a string: ");
    scanf("%s", &str);
    printf("Enter a text: ");
    scanf("%s", &text);

    STR_APPEND(str, text);
    printf("%s", str);

    return 0;
}
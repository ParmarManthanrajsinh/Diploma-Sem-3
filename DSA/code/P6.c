#include <stdio.h>

void find_text(char text[], char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        while(text[i] == str[i])
        {
            printf("Match ");
        }
    }
}

int main()
{
    char str[] = "Enter your name : Manthan";
    find_text(str, "name");

    return 0;
}
#include <stdio.h>
#include <string.h>

void find_text(char text[], char str[])
{
    int c = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == text[0])
        {
            int k = i;
            for (int j = 0; text[j] != '\0'; j++)
            {
                if (str[k] == text[j])
                {
                    c++;
                }
                else
                {
                    c = 0;
                }
                k++;
            }
            if (c == strlen(text))
            {
                printf("found %s",text);
            }
        }
    }
}

int main()
{
    char str[] = "Enter your name : Manthan";
    find_text("name", str);

    return 0;
}
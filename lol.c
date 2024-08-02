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
                    // printf("%d ", k);
                    c++;
                    // printf("match ");
                }
                else
                {
                    c = 0;
                }

                if (c == strlen(text))
                {
                    printf("found");
                }
                k++;
            }
        }
    }
}

int main()
{
    char str[] = "Enter your name : Manthan";
    find_text("dfdsf:", str);

    return 0;
}
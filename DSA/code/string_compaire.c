#include <stdio.h>
#include <string.h>

void STRCAP(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("string are not same");
        return;
    }

    for (int i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            printf("string are not same");
            return;
        }
    }

    printf("string are same");
}

int main()
{
    char str1[] = "Hee";
    char str2[] = "Hee";

    STRCAP(str1, str2);

    return 0;
}
#include <stdio.h>

/*

* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *

*/
int main()
{
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < i - 1; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = i; j < n; j++)
        {
            if(j == 0)
                continue;
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
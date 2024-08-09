// Implement array using row major order and column major order.
#include <stdio.h>

int main()
{
    int r = 3, c = 4;

    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    printf("Row-major order:\n");
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\nColumn-major order:\n");
    for (int j = 0; j < c; ++j)
    {
        for (int i = 0; i < r; ++i)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int i = 0;
start:
    i++;
    printf("%d\n", i);
    goto start;
    return 0;
}
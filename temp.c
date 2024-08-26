#include <stdio.h>
#include <string.h>

int main()
{
    int ind;
    int i = 0;
    int j = 0;
    int k = 0;
    char a[100];
    char b[100];
    char c[100];
    printf("enter the string :");
    gets(a);
    printf("enter the new string  insert into 1 st string :");
    gets(b);
    printf("enter position insert into string :");
    scanf("%d", &ind);
    while (i < ind && a[i] != '\0')
    {
        i++;
        c[k] = a[i];
        k++;
    }
    while (b[j] != '\0')
    {
        c[k] = b[j];
        j++;
        k++;
    }
    while (a[i] != '\0')
    {
        c[k] = a[i];
        i++;
        k++;
    }
    c[k] = '\0';
    printf("new string is %s", c);
    return 0;
}
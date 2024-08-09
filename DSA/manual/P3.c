//Implement sequential search algorithm.

#include <stdio.h>

int search(int n, int arr[], int key)
{
    int i = 0;
    arr[n] = key;

    while (arr[i] != key)
    {
        i++;
    }

    if (i == n)
    {
        printf("Unsuccessful Search");
        return 0;
    }
    else
    {
        printf("Successful Search");
        return 1;
    }
}

int main()
{
    int arr[10] = {23, 31, 43, 52, 53, 63, 65, 74, 75, 81};
    int n = 10;

    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);

    search(n,arr,key);

    return 0;
}
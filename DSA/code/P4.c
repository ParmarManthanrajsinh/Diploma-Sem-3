// Implement binary search algorithm.
#include <stdio.h>
#include <stdlib.h>

int search(int n, int arr[], int x)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (x == arr[mid])
        {
            printf("SUCCESSFUL SEARCH\n");
            return mid;
        }
        else if (x > arr[mid])
        {
            low = mid + 1;
        }
        else if (x < arr[mid])
        {
            high = mid - 1;
        }
    }
    printf("UNSUCCESSFUL SEARCH\n");
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int *arr;
    arr = (int *)malloc(sizeof(int) * n);

    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);

    int i = search(n, arr, key);
    printf("The element index is %d", i);

    return 0;
}
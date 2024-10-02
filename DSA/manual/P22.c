/*
Algorithm for insertion sort

step 1: read arr[] , n ,key ,i = 1 , j = 0

step 2: repeat step 3 untill ( i < n )

step 3: key = arr[i]
        repeat step 4 untill ( j >= 0 and arr[j] > key )
        arr[j+1] = key
        i = i + 1

step 4: arr[j+1] = arr[j]
        j = j - 1

*/

#include <stdio.h>

void insertion_sort(int arr[], int n)
{
    int key, j = 0;

    for (int i = 1; i < n; i++)
    {
        key = arr[i];

        for (j = i - 1; (j >= 0) && (arr[j] > key); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {23, 43, 12, 45, 67, 32, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
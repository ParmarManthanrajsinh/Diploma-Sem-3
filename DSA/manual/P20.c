/*

Algorithm for Selection sort method.

step 1: read arr[] , n , i = 0
        min = i , j = i + 1

step 2: repeat step 3 untill (i < n - 1)

step 3: min = i
        j = i + 1
        repeat step 4 untill (j < n)
        swap arr[i] and arr[min]
        i = i + 1

step 4: if (arr[j] < arr[min])
            min = j
        j = j + 1

*/

#include <stdio.h>

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    int arr[] = {12, 31, 54, 62, 34, 67, 87};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
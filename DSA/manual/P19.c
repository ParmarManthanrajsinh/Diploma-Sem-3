/*

Algorithm for Bubble sort method.

step 1: read arr[] , n , i = 0, j = 0

step 2: repeat step 3 untill (i < n - 1)

step 3: repeat step 4 untill (j < n - i - 1)
        i = i + 1

steo 4: if ( arr[j] > arr[j + 1]) then
            swap arr[j] and arr[j + 1]
        j = j + 1

*/

#include <stdio.h>

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
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

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
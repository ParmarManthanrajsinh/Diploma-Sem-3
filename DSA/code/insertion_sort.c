#include <stdio.h>

// void insertion_sort(int arr[], int n)
// {
//     int key, j = 0;

//     for (int i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;

//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

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
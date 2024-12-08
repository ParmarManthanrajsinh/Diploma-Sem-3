/*

Algorithm for Mergesort method.

step 1: Read arr[] , low, high, mid

step 2: if (low < high)
            step 3

step 3: mid = low + high / 2
        self call (arr, low, mid)
        self call (arr, mid + 1, high)
        call merge(arr, min, low, high)

Algorithm for Merge method.

step 1: Read arr[], mid, low, high
        i = low, j = mid + 1, k = low, temp[]

step 2: repeat step 3 untill (i <= mid && j <= high)

step 3: if (arr[i] < arr[j])
            temp[k] = arr[i]
            i = i + 1
        else
            temp[k] = arr[j]
            j = j + 1
        k = k + 1

step 4: repeat step 5 untill (i <= mid)

step 5: temp[k] = arr[i]
        i = i + 1
        k = k + 1

step 6: repeat step 7 untill (j <= high)

step 7: temp[k] = arr[j]
        j = j + 1
        k = k + 1

step 8: copy temp[] in arr[]

*/

#include <stdio.h>

void merge(int arr[], int mid, int low, int high)
{
    int i = low, j = mid + 1, k = low;
    int temp[100];

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }

    for (i = low; i <= high; i++)  
    {
        arr[i] = temp[i];
    }
}
  
void merge_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
}

int main()
{
    int arr[] = {89, 76, 11, 32, 34, 14, 55};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    merge_sort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

void delete(int arr[], int k)
{
    int c = 0;

    while (arr[c] != k)
    {
        c++;
    }

    while (arr[c] != 0)
    {
        arr[c] = arr[c + 1];
        c++;
    }
    arr[c] = 0;
}

int main()
{
    int arr[50] = {23, 12, 45, 53, 71, 65, 91, 78, 83, 91};

    int k;

    printf("Enter the element you want to delete in arr: ");
    scanf("%d", &k);

    print_array(arr, 50);

    delete (arr, k);

    print_array(arr, 50);

    return 0;
}

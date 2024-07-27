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

void insert(int arr[], int e, int in)
{
    int c = 0;

    while (arr[c] != 0)
    {
        c++; // going to the end of array
    }

    for (c; c >= in; c--)
    {
        int temp = arr[c]; // sawping the c index with c-1
        arr[c] = arr[c - 1];
        arr[c - 1] = temp;
    }
    arr[c] = e; // inserting the element in the array
}

int main()
{
    int arr[50] = {23, 12, 45, 53, 71, 65, 91, 78, 83, 91};

    int e, in;

    printf("Enter the element you want to insert into arr: ");
    scanf("%d", &e);

    printf("Enter the index of the element: ");
    scanf("%d", &in);

    print_array(arr, 50);

    insert(arr, e, in);

    print_array(arr, 50);

    return 0;
}

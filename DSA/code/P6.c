#include <stdio.h>

#define max 10
int arr[max];
int top = -1;

void push(int value)
{
    if (top != (max - 1))
    {
        top++;
        arr[top] = value;
    }
    else
    {
        printf("Stack Overflow LOL");
    }
}

void pop()
{
    if (top != -1)
    {
        top--;
    }
    else
    {
        printf("LOL Stack Underflow");
    }
}

int peek()
{
    if (top != -1)
    {
        return arr[top];
    }
    else
    {
        printf("LOL Stack is empty");
    }
}

void print_stack()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    push(5);
    push(1);
    push(9);
    push(7);
    push(4);
    pop();
    print_stack();
    printf("\npeek %d", peek());

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

void print_stack(struct stack *s)
{
    int top = s->top;
    while (top != -1)
    {
        printf("%d ", s->arr[top]);
        top--;
    }
    printf("\n");
}

void puch(struct stack *s, int value)
{
    if (s->top >= (s->size - 1))
    {
        printf("Stack is Overflow\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = value;
    }
}

void pop(struct stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is Underflow\n");
    }
    else
    {
        s->top--;
    }
}

int main()
{
    struct stack *s;
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    puch(s, 5);
    puch(s, 2);
    puch(s, 8);
    puch(s, 3);
    pop(s);
    print_stack(s);

    return 0;
}
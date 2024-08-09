#include <stdio.h>

#define max 10
int queue[max];
int front = -1, rear = -1;

void print_queue()
{
    for (int i = front; i < rear + 1; i++)
    {
        printf("%d ", queue[i]);
    }
}

void enqueue(int value)
{
    if (rear == (max - 1))
    {
        printf("Queue is full\n");
        return;
    }
    if (rear == -1 && front == -1)
    {
        rear = 0;
        front = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = value;
}

void dequeue()
{
    if (rear == -1 && front == -1)
    {
        printf("Queue is underflow");
    }
    else if (front == rear)
    {
        front--;
        rear--;
    }
    else
    {
        front++;
    }
}

int main()
{
    enqueue(34);
    enqueue(43);
    enqueue(31);
    enqueue(25);
    dequeue();
    enqueue(54);
    dequeue();

    print_queue();

    return 0;
}
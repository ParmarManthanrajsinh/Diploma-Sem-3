#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int front;
    int rear;
    int size;
    int *arr;
};

void print_queue(struct queue *q)
{
    if (q->front == -1 || q->front > q->rear)
    {
        printf("Queue is empty cannot print\n");
        return;
    }

    int front = q->front;
    int rear = q->rear;
    while (front <= rear)
    {
        printf("%d ", q->arr[front]);
        front++;
    }
    printf("\n");
}

void enqueue(struct queue *q, int value)
{
    if ((q->rear == -1) && (q->front == -1))
    {
        q->front = 0;
        q->rear = 0;
        q->arr[q->rear] = value;
    }
    else if (q->rear != (q->size - 1))
    {
        q->rear++;
        q->arr[q->rear] = value;
    }
    else
    {
        printf("Queue is full\n");
    }
}

void dequeue(struct queue *q)
{
    if (q->front == -1 || q->front > q->rear)
    {
        printf("Queue is empty\n");
        return;
    }
    else if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front++;
    }
}

int main()
{
    struct queue *q;
    q->size = 10;
    q->arr = (int *)malloc(q->size * sizeof(int));
    q->front = -1;
    q->rear = -1;

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 40);
    enqueue(q, 40);
    enqueue(q, 40);
    enqueue(q, 40);
    enqueue(q, 40);
    enqueue(q, 40);
    enqueue(q, 50);
    print_queue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    print_queue(q);

    return 0;
}
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
    if (q->front == -1)
    {
        printf("Queue is empty, cannot print\n");
        return;
    }

    int i = q->front;
    while (i != q->rear)
    {
        printf("%d ", q->arr[i]);
        i = (i + 1) % q->size;
    }
    printf("\n");
}

void enqueue(struct queue *q, int value)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        printf("Queue is full\n");
        return;
    }

    if (q->front == -1)
    {
        q->front = 0;
        q->rear = 0;
        q->arr[q->rear] = value;
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->arr[q->rear] = value;
    }
}

void dequeue(struct queue *q)
{
    if (q->front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front = (q->front + 1) % q->size;
    }
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 5;
    q->arr = (int *)malloc(q->size * sizeof(int));
    q->front = -1;
    q->rear = -1;

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    print_queue(q);
    dequeue(q);
    dequeue(q);
    enqueue(q, 60);
    enqueue(q, 70);
    print_queue(q);

    return 0;
}

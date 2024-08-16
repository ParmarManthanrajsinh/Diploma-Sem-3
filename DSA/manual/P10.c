#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void print_list(struct node *n) 
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}

struct node *insert_at_first(struct node *head, int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = value;
    ptr->next = head;
    return ptr;
}

void create_list(int size, struct node **ptr)
{
    struct node *n, *temp = NULL;
    for (int i = 1; i <= size; i++)
    {
        n = (struct node *)malloc(sizeof(struct node));
        n->data = i;
        n->next = temp;
        temp = n;
    }
    *ptr = temp;
    printf("Done\n");
}

int main()
{
    struct node *head;
    struct node *node1;

    head = (struct node *)malloc(sizeof(struct node));
    node1 = (struct node *)malloc(sizeof(struct node));

    create_list(5, &head);
    print_list(head);

    head->data = 12;
    head->next = node1;

    node1->data = 90;
    node1->next = NULL;
    print_list(head);

    head = insert_at_first(head, 23);
    head = insert_at_first(head, 59);
    head = insert_at_first(head, 71);

    print_list(head);

    return 0;
}
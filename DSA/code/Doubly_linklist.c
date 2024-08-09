#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *pre;
};

void print_linklist_from_next(struct node *head)
{
    struct node *current = head;

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void print_linklist_from_pre(struct node *last)
{
    struct node *current = last;

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->pre;
    }
    printf("\n");
}
int main()
{
    struct node *head;
    struct node *node1;
    struct node *node2;
    struct node *node3;

    head = (struct node *)malloc(sizeof(struct node));
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = node1;
    head->pre = NULL;

    node1->data = 23;
    node1->next = node2;
    node1->pre = head;

    node2->data = 45;
    node2->next = node3;
    node2->pre = node1;

    node3->data = 56;
    node3->next = NULL;
    node3->pre = node2;

    print_linklist_from_next(head);
    print_linklist_from_pre(node3);

    return 0;
}
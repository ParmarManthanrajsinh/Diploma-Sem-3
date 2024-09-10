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

struct node *insert_at_end(struct node *head, int value)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *n = head;

    new_node->data = value;

    while (n->next != NULL)
    {
        n = n->next;
    }

    n->next = new_node;
    new_node->next = NULL;

    return head;
}

int main()
{
    struct node *head;
    struct node *node1;

    head = (struct node *)malloc(sizeof(struct node));
    node1 = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = node1;

    node1->data = 90;
    node1->next = NULL;

    head = insert_at_end(head, 56);
    head = insert_at_end(head, 43);
    head = insert_at_end(head, 32);

    print_list(head);

    return 0;
}
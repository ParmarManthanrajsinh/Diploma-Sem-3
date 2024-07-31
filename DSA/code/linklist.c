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
}

struct node *insert_at_first(struct node *head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->next = head;
    new_node->data = data;
    return new_node;
}

struct node *insert_at_index(struct node *head, int data, int index)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *n = head;
    int i = 0;

    while (i != index - 1)
    {
        n = n->next;
        i++;
    }
    new_node->data = data;
    new_node->next = n->next;
    n->next = new_node;

    return new_node;
}

struct node *insert_at_end(struct node *head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *n = head;

    new_node->data = data;

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
    struct node *node2;
    struct node *node3;

    head = (struct node *)malloc(sizeof(struct node));
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = node1;

    node1->data = 23;
    node1->next = node2;

    node2->data = 45;
    node2->next = node3;

    node3->data = 56;
    node3->next = NULL;

    // head = insert_at_first(head, 10);
    head = insert_at_index(head, 7, 3);
    // head = insert_at_end(head, 67);

    print_list(head);

    return 0;
}

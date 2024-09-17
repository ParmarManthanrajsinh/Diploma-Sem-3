// Implement insertion of node in sorted linked list.
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

struct node *insert(struct node *head, int value)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *pre = head;
    struct node *ptr = head;
    new_node->data = value;

    if (ptr->data >= value)
    {
        new_node->next = head;
        head = new_node;
    }
    else
    {
        while (ptr->next != NULL && ptr->next->data <= value)
        {
            ptr = ptr->next;
        }

        new_node->next = ptr->next;
        ptr->next = new_node;
    }
    return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = NULL;

    head = insert(head, 36);
    head = insert(head, 56);
    head = insert(head, 66);
    head = insert(head, 16);

    print_list(head);

    return 0;
}

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

struct node *delete_at_first(struct node *head)
{
    struct node *n = head;
    head = head->next;
    free(n);
    return head;
}

struct node *delete_at_end(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);

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

    print_list(head);
    head = delete_at_end(head);
    head = delete_at_first(head);
    print_list(head);

    return 0;
}

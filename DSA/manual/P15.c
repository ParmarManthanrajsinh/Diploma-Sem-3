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

int search(struct node *n, int value)
{
    int c = 0;
    while (n != NULL && n->data != value)
    {
        n = n->next;
        c++;
    }
    return c;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *node1 = (struct node *)malloc(sizeof(struct node));
    struct node *node2 = (struct node *)malloc(sizeof(struct node));
    struct node *node3 = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = node1;

    node1->data = 23;
    node1->next = node2;

    node2->data = 45;
    node2->next = node3;

    node3->data = 56;
    node3->next = NULL;

    int n;
    print_list(head);

    printf("Enter a number to search in linklist: ");
    scanf("%d", &n);

    printf("The element is at index: %d", search(head, n));

    return 0;
}

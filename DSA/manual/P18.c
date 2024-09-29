#include <stdio.h>
#include <stdlib.h>

struct BinaryTreeNode
{
    int key;
    struct BinaryTreeNode *left, *right;
};

struct BinaryTreeNode *creatNode(int value)
{
    struct BinaryTreeNode *ptr = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    ptr->key = value;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

struct BinaryTreeNode *insert(struct BinaryTreeNode *root, int value)
{
    if (root == NULL)
    {
        return creatNode(value);
    }
    if (root->key < value)
    {
        root->right = insert(root->right, value);
    }
    else if (root->key > value)
    {
        root->left = insert(root->left, value);
    }
    return root;
}

struct BinaryTreeNode *search(struct BinaryTreeNode *node, int value)
{
    if (node == NULL || node->key == value)
    {
        return node;
    }

    if (node->key < value)
    {
        search(node->right, value);
    }
    else
    {
        search(node->left, value);
    }
}

int main()
{
    struct BinaryTreeNode *root = creatNode(43);
    root = insert(root, 45);
    root = insert(root, 15);
    root = insert(root, 95);
    root = insert(root, 54);
    root = insert(root, 25);

    if (search(root, 95) != NULL)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }

    return 0;
}
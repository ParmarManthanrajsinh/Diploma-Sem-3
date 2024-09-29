// Implement  construction  of  Binary  Search  Tree  (BST).

#include <stdio.h>
#include <stdlib.h>

struct BinaryTreeNode
{
    int key;
    struct BinaryTreeNode *left, *right;
};

struct BinaryTreeNode *creatNode(int value)
{
    struct BinaryTreeNode *new_node = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    new_node->key = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

struct BinaryTreeNode *insert(struct BinaryTreeNode *node, int value)
{
    if (node == NULL)
    {
        return creatNode(value);
    }
    if (value < node->key)
    {
        node->left = insert(node->left, value);
    }
    else if (value > node->key)
    {
        node->right = insert(node->right, value);
    }
    return node;
}

int main()
{
    struct BinaryTreeNode *root = creatNode(10);

    root = insert(root, 45);
    root = insert(root, 57);
    root = insert(root, 65);
    root = insert(root, 15);

    return 0;
}
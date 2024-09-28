// Implement  construction  of  Binary  Search  Tree  (BST).
// Implement  pre-order,  in-order,  post-order  traversal  methods  in  binary
// search tree.

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
<<<<<<< HEAD:DSA/manual/P17.c
        struct BinaryTreeNode *new_node = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
        new_node->key = value;
        new_node->left = NULL;
        new_node->right = NULL;
        return new_node;
=======
        return creatNode(value);
>>>>>>> 91dc8a14efa71b5de2b6dbf4a67dd30042209863:DSA/manual/P17_2.c
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


void inOrder(struct BinaryTreeNode *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->key);
        inOrder(root->right);
    }
}

void preOrder(struct BinaryTreeNode *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct BinaryTreeNode *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->key);
    }
}

int main()
{
    struct BinaryTreeNode *root = creatNode(10);

    root = insert(root, 45);
    root = insert(root, 57);
    root = insert(root, 65);
    root = insert(root, 15);

    inOrder(root);
    printf("\n");
    preOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");

    return 0;
}
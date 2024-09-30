#include <stdio.h>
#include <stdlib.h>

struct BinaryTreeNode
{
    int key;
    struct BinaryTreeNode *left, *right;
};

struct BinaryTreeNode *createNode(int value)
{
    struct BinaryTreeNode *ptr = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    ptr->key = value;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

struct BinaryTreeNode *insert_r(struct BinaryTreeNode *root, int value)
{
    if (root == NULL)
    {
        return createNode(value);
    }
    if (root->key < value)
    {
        root->right = insert_r(root->right, value);
    }
    else if (root->key > value)
    {
        root->left = insert_r(root->left, value);
    }
    return root;
}

struct BinaryTreeNode *insert_i(struct BinaryTreeNode *root, int value)
{
    if (root == NULL)
    {
        return createNode(value);
    }

    struct BinaryTreeNode *parent = NULL;
    struct BinaryTreeNode *current = root;

    while (current != NULL)
    {
        parent = current;
        if (value < current->key)
        {
            current = current->left;
        }
        else if (value > current->key)
        {
            current = current->right;
        }
        else
        {
            return root;
        }
    }

    struct BinaryTreeNode *newNode = createNode(value);
    if (value < parent->key)
    {
        parent->left = newNode;
    }
    else
    {
        parent->right = newNode;
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
    struct BinaryTreeNode *root = createNode(43);
    root = insert_r(root, 45);
    root = insert_i(root, 15);
    root = insert_i(root, 95);
    root = insert_i(root, 54);
    root = insert_r(root, 25);

    inOrder(root);

    return 0;
}
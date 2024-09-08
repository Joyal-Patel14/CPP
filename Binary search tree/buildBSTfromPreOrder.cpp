#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Build binary search tree from preorder

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *constructBST(int preorder[], int *preorderIdx, int key, int min, int max, int n)
{
    if (*preorderIdx >= n)
    {
        return NULL;
    }

    Node *root = NULL;
    if (key > min && key < max)
    {
        root = new Node(key);
        *preorderIdx = *preorderIdx + 1;

        if (*preorderIdx < n)
        {
            root->left = constructBST(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);
        }

        if (*preorderIdx < n)
        {
            root->right = constructBST(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
        }
    }

    return root;
}

void printPreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";

    printPreorder(root->left);

    printPreorder(root->right);
}

int main()
{
    int preorder[] = {30, 20, 10, 5, 19, 29, 28, 100, 70, 90, 150, 130};
    int n = 5;
    int preorderIdx = 0;

    Node *root = constructBST(preorder, &preorderIdx, preorder[0], INT_MIN, INT_MAX, n);

    printPreorder(root);

    return 0;
}

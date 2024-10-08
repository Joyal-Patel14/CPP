#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Diameter: Numbers of nodes in longest path between any two leaves

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

int calcHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);

    return (max(lHeight, rHeight) + 1);
}

// Optimised form

int calcDiameter(Node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }

    int lh = 0, rh = 0;

    int lDiameter = calcDiameter(root->left, &lh);
    int rDiameter = calcDiameter(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;

    return max(currDiameter, max(lDiameter, rDiameter));
}

// Normal form

int calcDiameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    int currDiameter = lHeight + rHeight + 1;

    int rDiameter = calcDiameter(root->right);
    int lDiameter = calcDiameter(root->left);

    return (max(currDiameter, max(lDiameter, rDiameter)));
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // By normal form
    cout << calcDiameter(root) << endl;

    // By optimised form
    int height = 0;
    cout << calcDiameter(root, &height) << endl;

    return 0;
}

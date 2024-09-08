#include <bits/stdc++.h>
using namespace std;

// Problem: Given an NxN matrix Mat. Sort all elements of the matrix.

int main()
{
    int n;
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    vector<int> b;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b.push_back(a[i][j]);
        }
    }

    sort(b.begin(), b.end());

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}

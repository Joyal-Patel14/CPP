#include <bits/stdc++.h>
using namespace std;

// Problem: Given a square matrix, turn it by 90 degrees in anti-clockwise direction without using any extra space.

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

    for (int x = 0; x < n / 2; x++)
    {
        for (int y = x; y < n - 1 - x; y++)
        {
            int temp = a[x][y];

            a[x][y] = a[n - 1 - y][x];
            a[n - 1 - y][x] = a[n - 1 - x][n - 1 - y];
            a[n - 1 - x][n - 1 - y] = a[y][n - 1 - x];
            a[y][n - 1 - x] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

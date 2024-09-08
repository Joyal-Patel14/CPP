#include <bits/stdc++.h>
using namespace std;

// Problem: Given a matrix of size r*c. Traverse the matrix in spiral form.

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int row_st = 0;
    int row_en = n - 1;
    int col_st = 0;
    int col_en = m - 1;

    while (row_st <= row_en && col_st <= col_en)
    {
        // For row start
        for (int col = col_st; col <= col_en; col++)
        {
            cout << a[row_st][col] << " ";
        }
        row_st++;

        // For col end
        for (int row = row_st; row <= row_en; row++)
        {
            cout << a[row][col_en] << " ";
        }
        col_en--;

        // For row end
        for (int col = col_en; col >= col_st; col--)
        {
            cout << a[row_en][col] << " ";
        }
        row_en--;

        // For col start
        for (int row = row_en; row >= row_st; row--)
        {
            cout << a[row][col_st] << " ";
        }
        col_st++;
    }

    return 0;
}

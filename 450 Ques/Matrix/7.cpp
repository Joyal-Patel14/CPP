#include <bits/stdc++.h>
using namespace std;

// Problem: Find the specific pair in matrix

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

    int ma = INT_MIN;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            for (int l = 0; l < n; l++)
            {
                for (int m = 0; m < n; m++)
                {
                    if (ma < (a[l][m] - a[i][j]))
                    {
                        ma = a[l][m] - a[i][j];
                    }
                }
            }
        }
    }

    cout << ma << endl;

    return 0;
}

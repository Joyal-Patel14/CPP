#include <bits/stdc++.h>
using namespace std;

// Problem: Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

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

    pair<int, int> b[n];

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;

        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                cnt++;
            }
        }

        b[i].first = cnt;
        b[i].second = i;
    }

    int idx = -1;
    int max = b[0].first;

    for (int i = 0; i < n; i++)
    {
        if (b[i].first > max)
        {
            max = b[i].first;
            idx = i;
        }
    }

    cout << idx << endl;

    return 0;
}

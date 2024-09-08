#include <bits/stdc++.h>
using namespace std;

// Problem: Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

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

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            v.push_back(a[i][j]);
        }
    }

    sort(v.begin(), v.end());

    int st = 0;
    int en = v.size() - 1;

    int mid = (st + en) / 2;

    cout << v[mid] << endl;

    return 0;
}

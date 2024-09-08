#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> mp;

    int r, c;
    cin >> r >> c;

    int mat[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int j = 0; j < c; j++)
    {
        mp[mat[0][j]] = 1;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mp[mat[i][j]] == i)
            {
                mp[mat[i][j]] == i + 1;

                if (i = c - 1 && mp[mat[i][j]] == r)
                {
                    cout << mat[i][j] << " ";
                }
            }
        }
    }

    return 0;
}

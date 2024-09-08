#include <bits/stdc++.h>
using namespace std;

// Problem: Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
//          1. Integers in each row are sorted from left to right.
//          2. The first integer of each row is greater than the last integer of the previous row.

int main()
{
    int n, m;
    cin >> n >> m;

    int k;
    cin >> k;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int smallest = a[0][0], largest = a[n - 1][m - 1];
    bool found = false;

    if (k > largest || k < smallest)
    {
        cout << "Element does not exist" << endl;
        return 0;
    }

    int i = 0, j = m - 1;

    while (i < n && j >= 0)
    {
        if (a[i][j] == k)
        {
            found = true;
        }

        else if (a[i][j] > k)
        {
            j--;
        }

        else if (a[i][j] < k)
        {
            i++;
        }
    }

    if (found == true)
    {
        cout << "Element found" << endl;
    }

    else
    {
        cout << "Element is not there" << endl;
    }

    return 0;
}

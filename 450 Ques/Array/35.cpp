#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array arr[] of N integers, calculate the median

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    if (n % 2 != 0)
    {
        int st = 0;
        int en = n - 1;

        int mid = (st + en) / 2;

        cout << a[mid] << endl;
    }

    else
    {
        int med = (a[(n - 2) / 2] + a[n / 2]) / 2;

        cout << med << endl;
    }

    return 0;
}

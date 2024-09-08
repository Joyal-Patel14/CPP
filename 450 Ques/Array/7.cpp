#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array, rotate the array by one position in clock-wise direction

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        swap(a[i], a[n - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

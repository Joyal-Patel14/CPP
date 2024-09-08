#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array arr[] of N non-negative integers representing the height of blocks. If width of each     block is 1, compute how much water can be trapped between the blocks during the rainy season.z

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left[n], right[n];
    int maxL = a[0];
    int maxR = a[n - 1];

    for (int i = 0; i < n; i++)
    {
        left[i] = max(maxL, a[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        right[i] = max(maxR, a[i]);
    }

    int store[n];

    for (int i = 0; i < n; i++)
    {
        store[i] = min(left[i], right[i]) - a[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (store[i] == 0)
        {
            continue;
        }

        ans += store[i];
    }

    cout << ans << endl;

    return 0;
}

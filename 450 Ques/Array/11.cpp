#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.There is only one repeated number in nums, return this repeated number.

int main()
{
    int n;
    cin >> n;

    int a[n + 1];

    for (int i = 0; i < n + 1; i++)
    {
        cin >> a[i];
    }

    int arr[n + 1] = {0};

    for (int i = 0; i < n + 1; i++)
    {
        arr[a[i]]++;
    }

    int ans;

    for (int i = 0; i < n + 1; i++)
    {
        if (arr[i] == 2)
        {
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}

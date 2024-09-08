#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array of size n and a number k, find all elements that appear more than n/k times

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> v(n, 0);

    for (int i = 0; i < n; i++)
    {
        v[a[i]]++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > (n / k))
        {
            cout << i << " ";
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array of n positive integers and a number k. Find the minimum number of swaps required to bring all the numbers less than or equal to k together.

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int good = 0;

    for(int i=0; i<n; i++)
    {
        if(a[i] <= k)
        {
            good++;
        }
    }

    int bad = 0;
    int mi = INT_MAX;

    for(int i=0; i<good; i++)
    {
        if(a[i] > k)
        {
            bad++;
        }
    }

    int i=0, j = good-1;

    while(j < n)
    {
        mi = min(mi, bad);
        j++;

        if(j<n && a[j] > k)
        {
            bad++;
        }

        if(a[i] > k)
        {
            bad--;
        }

        i++;
    }

    if(mi == INT_MAX)
    {
        cout << "0" << endl;
    }

    else
    {
        cout << mi << endl;
    }

    return 0;
}
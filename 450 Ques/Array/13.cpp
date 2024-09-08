#include <bits/stdc++.h>
using namespace std;

// Problem: Kadane's algorithm
// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    // Kadane's algorithm

    int cursum = 0;
    int maxsum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        cursum = cursum + a[i];

        if(cursum < 0)
        {
            cursum = 0;
        }

        if(cursum > maxsum)
        {
            maxsum = cursum;
        }
    }

    cout << maxsum << endl;

    return 0;
}

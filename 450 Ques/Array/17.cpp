#include <bits/stdc++.h>
using namespace std;

// Problem: You are given an array prices where prices[i] is the price of a given stock on the ith day.
//          You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
//          Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

int maxProfit(int a[], int n)
{
    int minSoFar = a[0];
    int maxp = 0;

    for(int i=0; i<n; i++)
    {
        minSoFar = min(minSoFar, a[i]);
        int profit = a[i] - minSoFar;
        maxp = max(maxp, profit);
    }

    return maxp;
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    cout << maxProfit(a, n) << endl;

    return 0;
}

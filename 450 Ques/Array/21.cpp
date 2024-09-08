#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

bool subArrayExist(int a[], int n)
{
    unordered_set<int> sumSet;

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum += a[i];

        if(sum == 0 || sumSet.find(sum) != sumSet.end())
        {
            return true;
        }

        sumSet.insert(sum);
    }

    return false;
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

    if(subArrayExist(a, n))
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "No" << endl;
    }

    return 0;
}

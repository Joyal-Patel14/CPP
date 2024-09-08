#include <bits/stdc++.h>
using namespace std;

// Problem: Find maximum product subarray

int maxProductSub(int *arr, int n)
{
    int maxi = arr[0];
    int mini = arr[0];
    int prod = arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            swap(mini, maxi);
        }

        maxi = max(arr[i], maxi*arr[i]);
        mini = min(arr[i], mini*arr[i]);

        if(maxi > prod)
        {
            prod = maxi;
        }
    }

    return prod;
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

    cout << maxProductSub(a, n) << endl;

    return 0;
}

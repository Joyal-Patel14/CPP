#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int counter = 0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] + a[j] == k)
            {
                counter++;
            }
        }
    }

    cout << counter << endl;

    return 0;
}

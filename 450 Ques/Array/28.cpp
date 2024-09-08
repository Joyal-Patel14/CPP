#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.

bool checkTriplet(int a[], int n, int k)
{
    sort(a, a+n);

    for(int i=0; i<n-2; i++)
    {
        int l = i+1;
        int r = n-1;

        while(l < r)
        {
            if(a[l] + a[i] + a[r] == k)
            {
                cout << a[l] << " " << a[i] << " " << a[r] << endl;
                return true;
            }

            else if (a[l] + a[i] + a[r] < k)
            {
                l++;
            }

            else
            {
                r--;
            }
        }
    }

    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    checkTriplet(a, n, k);

    return 0;
}

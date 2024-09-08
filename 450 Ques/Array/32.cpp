#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
//          1. All elements smaller than a come first.
//          2. All elements in range a to b come next.
//          3. All elements greater than b appear in the end.
//          The individual elements of three sets can appear in any order. You are required to return the modified array.

int main()
{
    int n;
    cin >> n;

    int low, high;
    cin >> low >> high;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int str = 0;
    int en = n - 1;

    for (int i = 0; i <= en;)
    {
        if (a[i] < low)
        {
            swap(a[i++], a[str++]);
        }

        else if (a[i] > high)
        {
            swap(a[i], a[en--]);
        }

        else
        {
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

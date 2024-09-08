#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
//          1. Each student gets exactly one packet.
//          2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int min = INT_MAX;

    for (int i = 0; i + m - 1 < n; i++)
    {
        int d = a[i + m - 1] - a[i];

        if (d < min)
        {
            min = d;
        }
    }

    cout << min << endl;

    return 0;
}
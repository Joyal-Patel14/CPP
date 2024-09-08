#include <bits/stdc++.h>
using namespace std;

// Problem: Find "Kth" max and min element of the given array

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int k;
    cin >> k;

    cout << a[k - 1] << endl;

    return 0;
}

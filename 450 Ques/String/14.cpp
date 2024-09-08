#include <bits/stdc++.h>
using namespace std;

// Problem: Given two strings s and t. Return the minimum number of operations required to convert s to t.

int operation(string s, string t, int n, int m)
{
    if (n == 0)
    {
        return m;
    }

    if (m == 0)
    {
        return n;
    }

    if (s[n - 1] == t[m - 1])
    {
        return operation(s, t, n - 1, m - 1);
    }

    int temp1 = operation(s, t, n, m - 1);     // Insert
    int temp2 = operation(s, t, n - 1, m);     // Remove
    int temp3 = operation(s, t, n - 1, m - 1); // Replace

    return 1 + (min(temp1, min(temp2, temp3)));
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, t;
    cin >> s >> t;

    int n = s.length();
    int m = t.length();

    int ans = operation(s, t, n, m);
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Problem: You are given an array. Your task is to find maximum sum of subarray which can be found using the above array

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e5 + 2;

signed main()
{
    int n;
    cin >> n;

    vi a(n);

    rep(i, 0, n)
    {
        cin >> a[i];
    }

    int curr = 0, maxTill = 0;

    rep(i, 0, n)
    {
        curr += a[i];

        maxTill = max(curr, maxTill);

        if (curr < 0)
        {
            curr = 0;
        }
    }

    cout << maxTill << endl;

    return 0;
}

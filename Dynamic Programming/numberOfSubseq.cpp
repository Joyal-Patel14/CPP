#include <bits/stdc++.h>
using namespace std;

// Problem: You are given a string s consisting of lower case latin latters ('a'-'z') and some '?'.
//          Your task is to find no. of subsequence 'abc' in all the strings '?' should be replaced by either of {'a', 'b', 'c'}.

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

signed main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int e = 1, a = 0, ab = 0, abc = 0;

    rep(i, 0, n)
    {
        if (s[i] == 'a')
        {
            a += e;
        }

        else if (s[i] == 'b')
        {
            ab += a;
        }

        else if (s[i] == 'c')
        {
            abc += ab;
        }

        else if (s[i] == '?')
        {
            abc = 3 * abc + ab;
            ab = 3 * ab + a;
            a = 3 * a + e;
        }
    }

    cout << abc << endl;

    return 0;
}

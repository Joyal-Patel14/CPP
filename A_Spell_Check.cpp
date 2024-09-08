#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str = "Timur";

    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n != 5) {
        cout << "NO" << endl;
        return;
    }

    map<char, int> m;

    for(auto i : s) m[i]++;

    if(m['T'] == 1 && m['i'] == 1 && m['m'] == 1 && m['u'] == 1 && m['r'] == 1) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

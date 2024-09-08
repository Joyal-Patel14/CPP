#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef map<int, int> mii;
typedef set<int> si;
typedef set<pair<int,int>> spii;
typedef queue<int> qi;


// String having Uppercase and Lowercase letters

void solve()
{
    string s; cin >> s;
    
    int hash[256] = {0};

    for (int i=0; i<s.size(); i++) {
        hash[s[i]]++;
    }

    int q; cin >> q;

    while(q--) {
        char c; cin >> c;

        cout << hash[c] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;

    while(t--) {solve();}

    return 0;
}
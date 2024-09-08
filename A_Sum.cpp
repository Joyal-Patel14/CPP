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

void solve()
{
    int a, b, c; cin >> a >> b >> c;

    if(a+b == c || b+c == a || a+c == b) cout << "YES" << endl;
    else cout << "NO" << endl;
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

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
    int n; cin >> n;
    
    string s; cin >> s;
    string ans;

    for(int i=n-1; i>=0; i--) {
        if(s[i] !='0') ans += (s[i] - '0' - 1 + 'a');

        else {
            string number;
            number += s[i-2];
            number += s[i-1];

            int x = stoi(number);
            i -= 2;
            ans += ('a' + x - 1);
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;
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
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    string s[3][1000];
    map<string, int> m;

    for(int i=0; i<3; i++) for(int j=0; j<n; j++) cin >> s[i][j], m[s[i][j]]++;

    for(int i=0; i<3; i++) {

        int ans = 0;

        for(int j=0; j<n; j++) {
        
            int x = m[s[i][j]];

            if(x == 1) ans += 3;
            else if(x == 2) ans++;
            else ;
        }

        cout << ans << " ";
    }

    cout << endl;
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
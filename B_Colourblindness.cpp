#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;

    string s1, s2;

    for(int i=0; i<n; i++) cin >> s1[i];
    for(int i=0; i<n; i++) cin >> s2[i];

    bool f = 1;

    for(int i=0; i<n; i++)
    {
        if(s1[i] == 'R' && s2[i] != 'R') f = 0;
        if(s2[i] == 'R' && s1[i] != 'R') f = 0;
    }

    if(!f) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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
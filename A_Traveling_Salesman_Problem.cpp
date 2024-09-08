#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> p;

    int x_pos = 0, y_pos = 0, x_neg = 0, y_neg = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        p.push_back({a, b});

        if(a == 0 && b < 0)
            y_neg = min(y_neg,b);
        else if(a == 0 && b>= 0)
            y_pos = max(y_pos,b);
        else if(a < 0 && b == 0)
            x_neg = min(x_neg,a);
        else
            x_pos = max(x_pos,a);
    }
    
    int ans = (y_pos + x_pos + abs(y_neg + x_neg));
    cout << ans * 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if((a-1) > (abs(b-c) + (c - 1))) cout << 2 << endl;
    else if ((a-1) < (abs(b-c) + (c - 1))) cout << 1 << endl;
    else cout << 3 << endl;
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
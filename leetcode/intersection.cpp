#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n1, n2;
    cin >> n1 >> n2;

    int a[n1], b[n2];

    for(int i=0; i<n1; i++) cin >> a[i];
    for(int i=0; i<n2; i++) cin >> b[i];

    vector<int> ans;

    unordered_map<int, int> m;

    for(int i: a) m[i]++;

    for(int i: b)
    {
        if(m[i] > 0)
        {
            ans.push_back(i);
            m[i]--;
        }
    }

    for(auto i : ans) cout << i << " ";
    cout << endl;

    return 0;
}

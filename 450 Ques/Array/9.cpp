#include <bits/stdc++.h>
using namespace std;

// Problem: Minimise the maximum difference between the heights

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;

    sort(a, a+n);

    int ans = a[n-1] - a[0];

    int maxE, minE;

    for(int i=1; i<=n-1; i++)
    {
        if(a[i] >= k && a[n-1] >= k)
        {
            maxE = max(a[i-1]+k, a[n-1]-k);
            minE = min(a[0]+k, a[i]-k);

            ans = min(ans, maxE-minE);
        }
    }

    cout << ans << endl;

    return 0;
}

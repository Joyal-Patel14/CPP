#include <bits/stdc++.h>
using namespace std;

// Problem: Find whether an array is subset of another array or not

bool isEqual(int b[], vector<int> &cnt)
{
    int m = cnt.size();

    sort(b, b+m);
    sort(cnt.begin(), cnt.end());

    for(int i=0; i<m; )
    {
        if(b[i] == cnt[i])
        {
            i++;
            return true;
        }
    }

    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }

    int i=0, j=0;

    vector<int> cnt;

    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            i++;
        }

        else if (b[j] < a[i])
        {
            j++;
        }

        else
        {
            cnt.push_back(b[j]);
            i++;
            j++;
        }
    }

    cout << isEqual(b, cnt) << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// Problem: You are given n activities with their start and finish times. Select the maximum number of activities that can be performed
//          by a single person, assuming that a person can only work on a single activity at a time.

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        v.push_back({start, end});
    }

    sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b) {
        return a[1] < b[1];
    });

    int take = 1;
    int end = v[0][1];

    for (int i = 0; i < n; i++)
    {
        if (v[i][0] >= end)
        {
            take++;
            end = v[i][1];
        }
    }

    cout << take << endl;

    return 0;
}

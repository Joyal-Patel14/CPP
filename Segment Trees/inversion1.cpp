#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array a[], We need to count the number of pair of indices (i, j) following the property.
// Property inversion = j < i, a[j] < a[i]


const int N = 1e5 + 2;
int a[N], tree[4 * N];

int query(int node, int st, int en, int l, int r)
{
    if (l > en || r < st)
    {
        return 0;
    }

    if (l <= st && en <= r)
    {
        return tree[node];
    }

    int mid = (st + en) / 2;
    int q1 = query(2 * node, st, mid, l, r);
    int q2 = query(2 * node + 1, mid + 1, en, l, r);

    return q1 + q2;
}

void update(int node, int st, int en, int idx, int val)
{
    if (st == en)
    {
        tree[node] = val;
        return;
    }

    int mid = (st + en) / 2;

    if (idx <= mid)
    {
        update(2 * node, st, mid, idx, val);
    }

    else
    {
        update(2 * node + 1, mid + 1, en, idx, val);
    }

    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int main()
{
    for (int i = 0; i < 4 * N; i++)
    {
        tree[i] = 0;
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        int ans = query(1, 1, n, x, n);

        cout << ans << " " << endl;

        update(1, 1, n, x, 1);
    }

    return 0;
}

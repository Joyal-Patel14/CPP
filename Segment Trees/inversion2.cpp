#include <bits/stdc++.h>
using namespace std;

// Problem: We are given the permutation Pi of n elements, for each i, a[i] denotes the number of j such that Pj > Pi.

const int N = 1e5 + 2;
int a[N], tree[4 * N];

void build(int node, int st, int en)
{
    if (st == en)
    {
        tree[node] = a[st];
        return;
    }

    int mid = (st + en) / 2;

    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);

    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int query(int node, int st, int en, int k)
{
    if (st == en)
    {
        return st;
    }

    int mid = (st + en) / 2;

    if (k < tree[2 * node])
    {
        return query(2 * node, st, mid, k);
    }

    else
    {
        return query(2 * node + 1, mid + 1, en, k - tree[2 * node]);
    }
}

void update(int node, int st, int en, int idx, int val)
{
    if(st == en)
    {
        a[idx] = val;
        tree[node] = val;
        return;
    }

    int mid = (st+en)/2;

    if(idx <= mid)
    {
        update(2*node, st, mid, idx, val);
    }

    else
    {
        update(2*node+1, mid+1, en, idx, val);
    }

    tree[node] = tree[2*node] + tree[2*node + 1];
}

int main()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        a[i] = 1;
    }

    build(1, 0, n-1);

    int cnt = n;

    int b[n];

    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }

    int ans[n];

    for(int i=n-1; i>=0; i++)
    {
        int k = cnt - b[i] - 1;
        cnt--;

        int temp = query(1, 0, n-1, k);
        update(1, 0, n-1, temp, 0);
        ans[i] = temp + 1;
    }

    for(int i=0; i<n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}

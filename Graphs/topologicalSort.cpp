#include <bits/stdc++.h>
using namespace std;

// Topological sort: A topological sort is an ordering of nodes in a directed graph where for each directed edge
//                   from node A to node B, node A appears before node B in the ordering.
// It is not necessary that each graph have only one topology. Topological ordering are not unique
// Cyclic graphs do not have topological sort. So, we can check cyclic graph by topological sort

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    vector<int> indeg(n, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // u --> v
        adj[u].push_back(v);
        indeg[v]++;
    }

    int cnt = 0;
    queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            pq.push(i);
        }
    }

    while (!pq.empty())
    {
        cnt++;
        int x = pq.front();
        pq.pop();
        cout << x << " ";
        // x --> v
        for (auto it : adj[x])
        {
            indeg[it]--;
            if (indeg[it] == 0)
            {
                pq.push(it);
            }
        }
    }

    return 0;
}

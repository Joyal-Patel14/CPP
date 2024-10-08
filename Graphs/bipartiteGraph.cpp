#include <bits/stdc++.h>
using namespace std;

// Bipartite graph: A bipartite graph is a graph whose vertices can be divided into two disjoint sets so that every edge connects two vertices from different sets (i.e. there are no edges which connect vertices from the same set). These sets are usually called sides. You are given an undirected graph.

vector<vector<int>> adj;
vector<bool> vis;
vector<int> col;
bool bipart;

void color(int u, int curr)
{
    if(col[u] != -1 and col[u] != curr)
    {
        bipart = false;
        return;
    }

    col[u] = curr;

    if(vis[u])
        return;
    
    vis[u] = true;
    for(auto i : adj[u])
    {
        color(i, curr xor 1); // if color is 0 then make it 1 OR vise versa
    }
}

int main()
{
    bipart = true;
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n, false);
    col = vector<int>(n, -1);

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            color(i, 0);
        }
    }

    if(bipart)
    {
        cout << "Graph is bipartite" << endl;
    }

    else
    {
        cout << "Graph is not bipartite" << endl;
    }
    


    return 0;
}

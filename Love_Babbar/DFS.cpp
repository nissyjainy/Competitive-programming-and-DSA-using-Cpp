#include <bits/stdc++.h>
using namespace std;

private:
void dfs(int node, int vis[], vector<int> adj, vector<int> &dfsans)
{
    vis[node] = 1;
    dfsans.push_back(node);
    for (auto it : adj[node])
    {
        if (!vis[node])
        {
            dfs(it, vis, adj, dfsans);
            // ahoya mare hu shu kau chu ki it thi start kar ok ane aagad sudhi lay ok
        }
    }
}

public:
vector<int> dfsofgraph(int V, vector<int> adj)
{
    int vis[V] = {0};
    int start = 0;
    vector<int> dfsans;
    dfs(start, vis, adj, dfsans);
    return dfsans;
}


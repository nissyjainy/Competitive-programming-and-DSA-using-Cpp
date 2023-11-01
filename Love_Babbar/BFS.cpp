#include <bits/stdc++.h>
using namespace std;
void prepareadjlist(unordered_map<int, set<int>> &adjList, vector<vector<int>> &adj)
    // tare che ne adjency list banay ok

    for (int i = 0; i < adj.size(); i++) // ahiya tu m lakh ki adj .size lakh koi vandho nathi ok
{
    int u = adj[i][0];
    int v = adj[i][1];
    adjList[u].insert(v);
    adjList[v].insert(u);
}
void bfs(unordered_map<int, set<int>> &adjList, vector<int> ans, unordered_map<int, bool> &visited, int node)
{
    // ahiya tare che n node atle kayo element nakhe che tu ok
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        // store kar final ans ma ok
        ans.push_back(frontNode);
        // traverse all the nodes of the frontNOde
        for (auto i : adjList[frontNode]) // adjList ma firstNode na neibour che
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
vector<int> bfsTraversal(int n, vector<vector<int>> &adj)
{
    unordered_map<int, set<int>> adjList; // aa che ne tare adjency list mate che aa
    vector<int> ans;                      // return karva mate che aa
    unordered_map<int, bool> visited;     // initially false hashe
    prepareadjlist(adjList, adj);
    // traverse all the components of the graph
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            // jo visited nathi to visit kar ok
            // aa tare che dissconnected graph mate che ok
            bfs(adjList, ans, visited, i);
        }
    }
    return ans;
}

// striver code ok
//  initially aena code ma che ne adjaccency list is given ok
vector<int> bfsofgraph(int V, vector<int> adj)
{
    vector<int> bfs;
    // aama mare ans store thay che ok
    /// ahiya tare che ne adj list aapi che ok already ok atle banavani jarur nathi ok
    int vis[V] = {0};
    // initially mare visited array ma 0 aave che ok
    queue<int> q;
    vis[0] = 1;
    // starting node ne 1 mark kari didhu che ok
    q.push(0);
    // starting node queue ma push kari didhi che ok
    while (!q.empty())
    {
        int Node = q.front();
        q.pop();
        bfs.push_back(Node);
        for (auto it : adj[Node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}
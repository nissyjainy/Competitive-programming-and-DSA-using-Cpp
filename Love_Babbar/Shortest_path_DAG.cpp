#include <bits/stdc++.h>
using namespace std;
class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;
    // ahiya mare adj list mate hu shu kau chu ki tare ek to int che jenu che ok ane tare biju koni sathe link che ane weight che ok
    void addedge(int u, int v, int weight)
    {
        pair<int, int> p = make_pair(v, weight);
        adj[u].push_back(p); // ahiya tare u int mate tare p che ok weight ane koni sathe link che ae ok
    }
    void printadj()
    {
        for (auto it : adj)
        {
            cout << it.first << "->";
            for (auto j : it.second)
            {
                cout << "(" << j.first << " ," << j.second << ")";
            }
        }
        cout << endl;
    }
    void dfs(int node, unordered_map<int, bool> &visited, stack<int> &s)
    {
        visited[node] = true;
        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour.first])
            {
                // jo ahiya mare agar visited nathi to aagad call kar ok
                dfs(neighbour.first, visited, s);
            }
        }
        s.push(node);
    }
    void short(int src, vector<int> &dist, stack<int> &s)
    {
        dist[src] = 0;
        while (!s.empty())
        {
            int top = s.top();
            s.pop();
            // distance not eqaul to infinty
            if (dist[top] != INT_MAX)
            {
                // ha have neighbouring node ma ja ok
                for (auto it : adj[top])
                {
                    if (dist[top] + it.second < dist[it.first])
                    {
                        dist[it.first] = dist[top] + it.second;
                    }
                }
            }
        }
    }
};
int main()
{
    Graph g;
    g.addedge(0, 1, 5);
    g.addedge(0, 2, 3);
    g.addedge(1, 2, 2);
    g.addedge(1, 3, 6);
    g.addedge(2, 3, 7);
    g.addedge(2, 4, 4);
    g.addedge(2, 5, 2);
    g.addedge(3, 4, -1);
    g.addedge(4, 5, -2);
    g.printadj();
    // aa to sauthi basic che ok
    // have mare topological sort kar ok
    int n = 6;
    unordered_map<int, bool> visited;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.dfs(i, visited, s);
        }
    }
    int src = 1;
    // have mare ek distance no array banai le ok
    vector<int> dist(n);
    for (int i = 0; i < dist.size(); i++)
    {
        dist[i] = INT_MAX;
    }
    g.short(src, dist, s);
    cout << "Answer is" << endl;
    for (int i = 0; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
    return 0;
}
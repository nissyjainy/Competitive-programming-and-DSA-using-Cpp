#include <bits/stdc++.h>
using namespace std;

vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // adjacency list banay ok
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < g.size(); i++)
    {
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;
        // w is the weight ok ane g ma che ok
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    vector<int> key(n + 1);
    vector<bool> mst(n + 1);
    vector<int> parent(n + 1);
    // ahiya che ne mei n+1 atle lidhu che kem ki index ne j node thi batavu chu hu
    // initially badha ne lakh ok
    for (int i = 0; i <= n; i++)
    {
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = false;
    }
    key[1] = 0;
    parent[1] = -1;
    // initially mei banne ne set kari didha che ok
    // have che ne source node na neighbour ne traverse kar ok
    for (int i = 1; i < n; i++)
    {
        // have che ne tu mini walu kar ok
        int mini = INT_MAX;
        int u;
        for (int v = 1; v <= n; v++)
        {
            if (key[v] < mini && mst[v] == false)
            {
                mini = key[v];
                u = v;
            }
        } // traverse kar ok aakha key wala vector ma

        mst[u] = true;
        // have tu che ne neighbours nu jo ok
        for (auto neighbour : adj[u])
        {
            // u na neighbours ne jovu chu ne hu
            // bhai tare che ne u mate jo ok aena neighbours jo ok
            int v = neighbour.first;
            int w = neighbour.second;
            // ae wala u par aaine hu travaerse karu chu ok
            // v ane w mate ok
            if (mst[v] == false && w < key[v])
            {
                parent[v] = u;
                key[v] = w;
                // w tare ochu che ok ane tu che ne key ma nakh ok as min joiye che mare ok
            }
        }
    }

    // bhai aapde che ne tree banavanu che ok
    // to mare jovu padshe ok ki weight le kya thi jay che ae jo ok ane parent jo ok
    vector<pair<pair<int, int>, int>> result;
    for (int i = 2; i <= n; i++)
    {
        result.push_back({{parent[i], i}, key[i]});
    }
    return result;
}

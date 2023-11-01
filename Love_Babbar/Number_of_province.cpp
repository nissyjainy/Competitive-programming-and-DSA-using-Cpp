#include <bits/stdc++.h>
using namespace std;

int findNumOfProvinces(vector<vector<int>> &roads, int n)
{
     vector<int> adjls(n);
    void dfs(vector<int> & adjls, int vis[], int node)
    {
        vis[node] = 1;
        for (auto it : adjls[node])
        {
            if (!vis[it]) // tare ahiya iterator to it che ok
            {
                dfs(adjls, vis, it);
            }
        }
    }

   
    // generalized code for converting the adjacency matrix to adjacency list
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (roads[i][j] == 1 && i != j)
            {
                adjls(i).push_back(j);
                adjls(j).push_back(i);
            }
        }
    }
    int vis[n] = {0};
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            count++;
            dfs(adjls, vis, i);
        }
    }
    return count;
};

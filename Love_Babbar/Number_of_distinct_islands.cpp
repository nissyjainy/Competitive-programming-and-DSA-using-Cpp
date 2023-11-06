//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
private:
    void dfs(int row, int col, vector < vector<int>> & vis, vector<vector<int>> &grid, vector<pair<int, int>> &ans, int row0, int col0)
    {
        vis[row][col] = 1;
        ans.push_back({row - row0, col - col0});
        // ha tare che ne dfs ma direct neighbpur j call thay che ok
        // recusion thi thay che ne aa ok
        // for(int row0=-1;row0<=1;row0++)
        // {
        //     for(int col0=-1;col0<=1;col0++)
        //     {
          int n = grid.size();
        int m = grid[0].size();
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};
        for (int i = 0; i < 4; i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol] == 1)
            {
                // tu ahiya che ne dfs call karish ok
                dfs(nrow, ncol, vis, grid, ans, row0, col0);
            }
        }
    }

public:
    int countDistinctIslands(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        set<vector<pair<int, int>>> s;

        // for not connected che tare ok
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    vector<pair<int, int>> ans;
                    // aa tare che ne je mare ans che ane je mare set ma jay che ae che ok
                    dfs(i, j, vis, grid, ans, i, j);
                    s.insert(ans);
                    // tare khali che ne set ni andar ans j jay che ok
                }
            }
        }
        return s.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends
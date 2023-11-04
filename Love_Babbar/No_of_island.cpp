// kai bhul aave che yaar TLE aave che
//  khabar nahi kem yaar
//  main logic is disconnected graph mate hu shu kau chu te traverse karyu ok ane pachi te normal dfs call karyu ok
private:
void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid)
{
    vis[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col}); // bhai ahiya tare che ne pair insert kare che tu ok queue ma ok
    int n = grid.size();
    int m = grid[0].size();
    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        // neighbours mate mare for each loop nahi aave ok
        for (int delrow = -1; delrow <= 1; delrow++)
        {
            for (int delcol = -1; delcol <= 1; delcol++)
            {
                int nrow = row + delrow;
                int ncol = col + delcol;
                if ((nrow >= 0) && (nrow < n) && (ncol >= 0) && (ncol < m) && (grid[nrow][ncol] = '1') && (!vis[nrow][ncol]))
                {
                    vis[nrow][ncol] == 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
}

public:
// Function to find the number of islands.
int numIslands(vector<vector<char>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> vis(n, vector<int>(m, 0));
    int count = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (!vis[row][col] && grid[row][col] == '1')
            {
                count++;
                bfs(row, col, vis, grid);
            }
        }
    }
    return count;
}


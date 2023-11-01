// #include <bits/stdc++.h>
// using namespace std;

class Solution
{
private:
    bool isSafe(int x, int y, int n, vector<vector<int>> &m, vector<vector<int>> visited)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, string path, vector<vector<int>> visited)
    {
        // base case
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }
        // pachi tare visited ne 1 mark kari de ane backtracking ma visited ne 0 mark kar ok
        visited[x][y] = 1;
        // Down
        int newx = x + 1;
        int newy = y;
        if (isSafe(newx, newy, n, m, visited))
        {
            path.push_back('D');
            solve(m, n, ans, newx, newy, path, visited); // recursive call che ok atle mare starting na index change thay che ok
            path.pop_back();
        }
        // left
        newx = x;
        newy = y - 1;
        if (isSafe(newx, newy, n, m, visited))
        {
            path.push_back('L');
            solve(m, n, ans, newx, newy, path, visited);
            path.pop_back();
        }
        // Right
        newx = x;
        newy = y + 1;
        if (isSafe(newx, newy, n, m, visited))
        {
            path.push_back('R');
            solve(m, n, ans, newx, newy, path, visited);
            path.pop_back();
        }
        // UP
        newx = x - 1;
        newy = y;
        if (isSafe(newx, newy, n, m, visited))
        {
            path.push_back('U');
            solve(m, n, ans, newx, newy, path, visited);
            path.pop_back();
        }

        visited[x][y] = 0; // backtracking ok
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;
        if (m[0][0] == 0) // ke jo pehla jagya ae j takleef che to tya nahi aave tya j return kari de ok
        {
            return ans;
        }
        int srcx = 0; // source x ane source y ne define kari didhu che ok
        int srcy = 0;
        vector<vector<int>> visited = m; // ek matrix joiye che atle mare vector of vector lidhu che mei ok
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }
        string path = ""; // ans jema store kare che tu ae che ok
        solve(m, n, ans, srcx, srcy, path, visited);
        sort(ans.begin(), ans.end());
        return ans;
    }
};


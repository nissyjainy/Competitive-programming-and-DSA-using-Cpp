class Solution
{
private:
    void dfs(vector<vector<int>> &ans, int sr, int sc, int newcolor, vector<vector<int>> &image, int initial)
    {
        ans[sr][sc] = newcolor;
        // have tu che ne neighbours ne call kar ok
        int n = image.size();
        int m = image[0].size();
        int ro[] = {-1, 0, 1, 0};
        int co[] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++)
        {
            int newrow = sr + ro[i];
            int newcol = sc + co[i];
            if (newrow >= 0 && newcol >= 0 && newrow < n && newcol < m && image[newrow][newcol] == initial && ans[newrow][newcol] != newcolor)
            {
                dfs(ans, newrow, newcol, newcolor, image, initial);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {

        int initial = image[sr][sc];
        vector<vector<int>> ans = image;
        // int n = image.size();
        // int m = image[0].size();
        // ahiya tare je ans che ne aej tare visited che ok
        // copy create kari didhi che mei ok done
        dfs(ans, sr, sc, color, image, initial);
        // color mare che ne new color che ok
        return ans;
    }
};


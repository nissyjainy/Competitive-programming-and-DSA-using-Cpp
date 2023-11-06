class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        // unconnected walu logic lagay ok 
        int vis[n][m];
        int countfresh =0;
        queue<pair<pair<int,int>,int>>q;
        // visited array banai lidhu ok 
        for(int row= 0;row<n;row++)
        {
            for(int col = 0;col<m;col++)
            {
                if( grid[row][col]==2)
                {
                    // ahiya tare dfs no call aave che ok 
                    // tare bfs no call nathi aavto to ae khotu kariyu che te ok
                    q.push({{row,col},0});
                    vis[row][col]=2;
                }
                else
                {
                    vis[row][col]=0;
                }
                if(grid[row][col]==1)
                {
                    countfresh++;
                    //ahiya hu shu karu chu tare ketla fresh che ne aenu count lagau chu ok 
                }
            }
        }
        int tm =0;
          int ro[] = {-1,0,1,0};
            int co[] = {0,+1,0,-1};
            int count =0;
        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(tm,t);
            q.pop();
             int n = grid.size();
             int m = grid[0].size();
          
            for(int i=0;i<4;i++)
            {
                int nrow = r+ ro[i];
                int ncol = c+ co[i];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && grid[nrow][ncol]==1 && vis[nrow][ncol]!=2)
                {
                    // aa che ne tare fresh mate che ki hu check karu aene rotten baanava mate ok 
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol] =2;
                    // ahiya mare visited ma to 2 nakhvanu che yaar ae jo ek vaar
                    count++;

                }
            }
        }
        if(countfresh!=count)
        {
            return -1;
        }
        return tm;
    }
};

// jo bhai aa question ma shu che ki tare che ne ek grid aapi che ok to tare che ne grid mathi ketli vaar ma oranges rotten thai jay che ae jovanu che ok 
// unconnected graph pan che ok to tare che ne badhi node ne travael karvanu ok 
//aama mare bfs use karu chu ok to tare queue aavshe ok done ane condition check thahse ok queue ni ok 
// normal bfs kar ok q mathi pop kar ok and all and neighbour ne pan traverse kar ok tari peli trick thi ok 
// aa to tare 4 ni trick che ok 8 ni trick tare che ne for loop sathe karvani hoy che ok bas aatlu j che ok 
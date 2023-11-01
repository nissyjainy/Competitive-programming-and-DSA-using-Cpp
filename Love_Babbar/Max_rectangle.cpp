class Solution{
    private:
    vector<int> nextsmaller(int *arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n); // n size no banayo che ok
        for (int i = n - 1; i >= 0; i--)
        {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> presmaller(int *arr, int n)
    {

        stack<int> s;
        s.push(-1);
        vector<int> ans(n); // n size no banayo che ok
        for (int i = 0; i < n; i++)
        {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
     int largestRectangleArea(int * heights[],int n)
    {
        // int n = heights.size();
        vector<int> next(n);
        next = nextsmaller(heights, n);
        vector<int> pre(n);
        pre = presmaller(heights, n);
        int area = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int len = heights[i];
            if (next[i] == -1) // yare badha element same thai jay che tyare aa condition lagay ok
            {
                next[i] = n;
            }
            int wid = next[i] - pre[i] - 1;
             int newans = len * wid;
        area = max(area, newans);
        }

         return area;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) 
    {
       int area = largestRectangleArea(M[0],m);
       for(int i=1;i<n;i++) // row ma traverse karva mate
       {
           for(int j=0;j<n;j++) // column ma traverse karva mate
           {
               if(M[i][j]!=0)
               {
                   M[i][j]= M[i][j] + M[i-1][j]; // add kar ok 
               }
               else
               {
                   M[i][j]==0; // jyare 0 hoy tyare add nahi thay 
               }
           }
             area = max(area,largestRectangleArea(M[i],m)); // darek row nu area calculate thay che
       }
        return area;   
    }
    
};
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size(); // o(n2) jay che atle
//         vector<int> v;
//         for(int i =0;i<n;i++)
//         {
//             for(int j =i+1;j<n;j++)
//             {
//                  v.push_back(min((height[i]),(height[j]))*(j-i));
//             }
//         }
//         return *max_element(v.begin(),v.end());

//     }
// };
// jo bhai hu shu kau chu ki aama o(n2) che to tle aave che mare thodu optimize karvanu che ok taru logic ekdum sachu che ok khali tare TLE aave che bas baki kai nathi ok

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0;
        int r = height.size() - 1;
        int maxi = 0;
        while (l < r)
        {
            int start = height[l];
            int end = height[r];
            int mini = min(start, end);
            int len = r - l;
            int curr = mini * len;
            maxi = max(maxi, curr);
            if (start < end)

            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return maxi;
    }
};
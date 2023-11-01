#include <bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>> st;
    /*
    Ahiya upar ans store kare che
    */
    for (int i = 0; i < n; i++)
    {
        set<int> hashset;

        for (int j = i + 1; j < n; j++)
        {
            int third = -(arr[i] + arr[j]);
            if (hashset.find(third) != hashset.end()) // ke tare if not equal ok to present che ae ok
            {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp); // ans store thai jay che
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end()); // je set ma che ane mei ans ma nakhi didho che ok
    return ans;
}

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        //     set<vector<int>> st;
        //     /*
        //     Ahiya upar ans store kare che
        //     */
        //     for (int i = 0; i < nums.size(); i++)
        //     {
        //         set<int> hashset;

        //         for (int j = i + 1; j < nums.size(); j++)
        //         {
        //             int third = -(nums[i] + nums[j]);
        //             if (hashset.find(third) != hashset.end()) // ke tare if not equal ok to present che ae ok
        //             {
        //                 vector<int> temp = {nums[i], nums[j], third};
        //                 sort(temp.begin(), temp.end());
        //                 st.insert(temp); // ans store thai jay che
        //             }
        //             hashset.insert(nums[j]);
        //         }
        //     }
        //     vector<vector<int>> ans(st.begin(), st.end()); // je set ma che ane mei ans ma nakhi didho che ok
        //     return ans;
        // }
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        // jo aama i ne constant rakh ok
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue; // to avoid the repition
            }
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                {
                    j++;
                }
                else if (sum > 0)
                {
                    k--;
                }
                else
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) // jo same che aena mate
                    {
                        j++;
                    }
                    while (j < k && nums[k] == nums[k + 1]) // jo same che aena mate
                    {
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};


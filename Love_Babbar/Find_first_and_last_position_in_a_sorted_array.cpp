class Solution
{
public:
    // ahiya aaju baju ma che ok khabar padi ok
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans;
        int i = 0;
        int j = nums.size() - 1;
        set<int> s;
        if (nums.size() == 1 && nums[0] == target)
        {
            return {0, 0};
        }
        if(nums.size() == 0)
        {
            return {-1,-1};
        }
        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        if (s.size() == nums.size())
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == target)
                {
                    return {i, i};
                }
                
            }
           
        }
        else
        {
            while (i < j)
            {
                if (nums[i] == target && nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
                else if (nums[i] < target)
                {
                    i++;
                }
                else if (nums[j] > target)
                {
                    j--;
                }
            }
        }
        if (ans.size() == 0)
        {
            return {-1, -1};
        }
        return ans;
    }
};
// brute force to khabar padi gayi ok ek vaar aagad thi loop chalay ek vaar pachad thi loop chalay ane ans store kar ok
// jo bhai aama khali mare che ne binary search j karvanu che ok 

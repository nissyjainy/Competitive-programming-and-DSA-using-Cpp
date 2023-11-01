class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        // vector push back karine thai jay ok
        // maxi find kar ok
        int n;
        vector<int> v;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            v.push_back(candies[n]);
        }
        int d = *max_element(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if ((v[i] + extraCandies) >= d)
            {
                vec.push_back(true);
            }
            else
            {
                vec.push_back(false);
            }
        }
    }
    return vec;
};


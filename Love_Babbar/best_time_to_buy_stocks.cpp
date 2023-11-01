class Solution
{
public:
	int maxProfit(vector<int> &prices)
	{
		vector<int> ans;
		for (int i = 0; i < prices.size(); i++)
		{
			for (int j = i + 1; j < prices.size(); j++)
			{
				if (prices[j] > prices[i])
				{
					ans.push_back(prices[j] - prices[i]);
				}
			}

			int maxi = INT_MIN;
			for (int k = 0; k < ans.size(); k++)
			{
				maxi = max(maxi, ans[k]);
			}
			if (maxi == INT_MIN)
			{
				return 0;
			}
			
		}
        return maxi;
	}
    
};
// aa approach ekdum socho che but TLE aave che aema ok

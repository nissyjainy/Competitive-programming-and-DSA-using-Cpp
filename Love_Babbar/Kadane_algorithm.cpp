class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long int sum = 0;
        int maxi = INT_MIN;
        int ansstart = -1;
        int ansend = -1;
        int start ;
        for(int i=0;i<nums.size();i++)
        {
            if(sum ==0)
            {
                start = i;
            }
            sum = sum +nums[i];
              if(maxi<sum)
            {
                maxi = sum;
                ansstart = start;
                ansend = i;
            }
            if(sum<0)
            {
                //reinitializing the sum ok
                sum = 0;
            }
          
            
        }
        return maxi;
    }
};
  
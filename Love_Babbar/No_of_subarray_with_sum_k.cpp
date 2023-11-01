class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       // 2 pointer wala thi kar ok 
       int left = 0;
       int right = 0;
       long long sum = nums[0];
       int count = 0;
       int n = nums.size();
       while(right<n)
       {
           while(left<=right && sum>k)
           {
               sum = sum - nums[left];
               left++;
           }
           if(sum==k)
           {
               count++;
           }
           right++;
           if(right<n)
           {
               sum = sum + nums[right];
           }

       }
       return count;
    }
};
// AA APPROACH MARE POSITIVE ANE ZERO MATE CHE OK 
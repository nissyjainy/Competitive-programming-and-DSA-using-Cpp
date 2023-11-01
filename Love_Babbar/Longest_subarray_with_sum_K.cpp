// approach 1

#include <bits/stdc++.h>
int getLongestSubarray(vector<int> &nums, int k)
{
    map<long long, int> mpp; // long long ahiya hu che ne sum mate che ok ane int
                             // mare index mate che ok
    long long sum = 0;
    int maxi = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        if (sum == k)
        {
            maxi = max(
                maxi,
                i + 1); // i+1 atla mate ke tya sudhi mare length i+1 thai jay che ok
        }

        long long remain = sum - k;
        if (mpp.find(remain) != mpp.end())
        {
            // mali gayu che ok
            int len = i - mpp[remain];
            // i hamna sudhi nu mare index che ok
            // remain walo je sum che aena corresponding mei length kadi che ok
            maxi = max(maxi, len);
        }
        if (mpp.find(sum) == mpp.end())
        {
            // jo have maliyu nathi mare ok
            // to update kar ok
            mpp[sum] = i;
        }
    }
    return maxi;
    // THIS CODE IS VALID AND OPTIMAL FOR BOTH POSITIVES AND NEGATIVES OK ONLY FOR
    // POSITIOVES NATHI OPTIMAL OK
}
// approach 2
// WHICH IS ONLY OPTIMAL FOR THE POSITIVES AND ZEROES
#include <bits/stdc++.h>
int longestSubarray(vector<int> a, long long k)
{
    // ahiya hu che ne 2 pointer approach lagavu chu ok
    int left = 0;
    int right = 0;
    long long sum = a[0]; // initially sum to pehlo j element j hashe ne
    int n = a.size();
    int maxi = 0;
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum = sum - a[left];
            left++;
        }
        // ahiya mei left mathi dectease kari didhu ok
        if (sum == k)
        {
            maxi = max(maxi, right - left + 1);
        }
        right++;
        // sum ma mare right valo part pan add karvano che ne
        if (right < n)
        {
            sum += a[right];
            // ahiya add hu kem dar vakhte karu chu kemki dar vakhte add karine hu check karu chu sum >k che ki nahi ok
        }
        return maxi;
    }
}

class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        // min length of the subarray with a given sum che aa to ok
        int left = 0;
        int right = 0;
        long long sum = nums[0];
        int maxi = 0;
        int n = nums.size();
        while (right < n)
        {
            while (left <= right && sum >= x)
            {
                // left mathi sutract kar ok
                sum = sum - nums[left];
                left++;
            }
            if (sum == x)
            {
                maxi = max(maxi, right - left + 1);
            }
            right++;
            // right hamesha add thashe
            if (right < n)
            {
                sum = sum + nums[right];
            }
            return maxi;
        }
        return -1;
    }
};


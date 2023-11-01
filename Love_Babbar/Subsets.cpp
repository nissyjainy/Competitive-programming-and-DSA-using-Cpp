#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(vector<int> nums,vector<int>output,vector<vector<int>>&ans,int index)
{
    // base case
    if(i>nums.length())
    {
        ans.push_back(output);
        return;
    }
    // exclude
    {
        solve(nums,output,ans,index+1);
    }
    //include
    {
        int element = nums[index];
        output.push_back(element);
        solve(nums,output,ans,index+1);
    }
}
int main()
{
    // nums ae maro input vector che ok 
    vector<vector<int>> ans; // je badha subset return karshe ok 
    vector<int> output;
    int index = 0;
    solve(nums,output,ans,index);
    return ans;
    
}
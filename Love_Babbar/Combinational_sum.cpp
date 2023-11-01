class Solution {
public:
 void combination(int index , int target , vector<int> & arr, vector<vector<int>> &ans, vector<int> &ds)
 {
     // base case
     if(index == arr.size())
     {
         if(target == 0)
         {
             ans.push_back(ds);
         }
         return ;
     }
     
     // pick karva mate 
     if(arr[index]<=target)
     {
          ds.push_back(arr[index]);
         combination(index,target-arr[index],arr,ans,ds);
         ds.pop_back();

     }
     // non pick condition 
     
      combination(index+1,target,arr,ans,ds);
 }
 public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds; // banayu jeni andar store karvanu che
        int index = 0;
        combination(index,target,candidates,ans,ds);
        return ans;
    }
};
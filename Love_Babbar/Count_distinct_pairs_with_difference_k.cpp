//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalPairs(vector<int>nums, int k){
	     vector<int> v;
	     set<int>s;
	     vector<int> vec;
	     vector<int> ans;
	    sort(nums.begin(),nums.end());
	   if(k==0)
	   {
	   for(int i =0;i<nums.size();i++)
	   {
	       for(int j = i+1;j<nums.size();j++)
	       {
	           v.push_back(nums[j]-nums[i]);
	       }
	   }
	   int count =0;
	   //if(v.find(v.begin(),v.end(),k))
	   
	       for(int i=0;i<v.size();i++)
	       {
	           if(v[i]==k)
	           {
	               count++;
	           }
	       }
	       return count;
	   }
	   
	   else
	   {
	      for(int i=0;i<nums.size();i++)
	      {
	          s.insert(nums[i]);
	          
	      }
	      for(auto it:s)
	      {
	          vec.push_back(it);
	      }
	      for(int i=0;i<vec.size();i++)
	      {
	          for(int j =i+1;j<vec.size();j++)
	          {
	               ans.push_back(vec[j]- vec[i]);
	          }
	      }
	      int result =0;
	   //if(v.find(v.begin(),v.end(),k))
	   
	       for(int i=0;i<ans.size();i++)
	       {
	           if(ans[i]==k)
	           {
	               result++;
	           }
	       }
	       return result;
	      
	   }
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
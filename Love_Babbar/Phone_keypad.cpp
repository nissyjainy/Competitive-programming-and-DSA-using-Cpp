#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(string digits, string output,vector<string> &ans,int index,string mapping)
{
    // base case
    {
        if(index>=digits.length())
        {
            ans.push_back(output);
            return;
        }

    }
    // have jem 23 che to  2 and 3 ne kadh ok
    int digit = digits[index] - '0'; // digits[index] tane ek character aape che ok 
    string map = mapping[digit]; // 2 na corresponding tane kayu map male che ae jo ok
    for(int i=0;i<map.length();i++)
    {
        output.push_back(map[i]); // mapping ma thi ek ek nakh ok 
         solve(digits,output,ans,index+1,mapping);
         output.pop_back();
    }
}
     vector<string> letterCombinations(string digits)
     {
           vector<string> ans;
           string output = "";
           int index = 0;
           string mapping = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
           solve(digits,output,ans,index,mapping);
           return ans;
     }
    

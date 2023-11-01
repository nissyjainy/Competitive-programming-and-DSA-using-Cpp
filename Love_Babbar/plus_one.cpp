#include <bits/stdc++.h>
using namespace std;
#define int long long int
int main()
{
    // class Solution
    // {
    // public:
    //     vector<int> plusOne(vector<int> &digits)
    //     {

    //         reverse(digits.begin(), digits.end());
    //         long long sum = 0;

    //         vector<int> v;
    //         for (int i = 0; i < digits.size(); i++)
    //         {
    //             sum = sum + (digits[i] * pow(10, i));
    //         }
    //         //  int ans = 0;
    //         // while (sum > 0)
    //         // {
    //         //     ans = ans * 10 + sum % 10;
    //         //     sum = sum / 10;
    //         // }
    //         // cout << ans << endl;
    //            sum = sum +1;
    //            while(sum!=0)
    //            {
    //               int d = sum % 10;
    //               v.push_back(d);
    //               sum = sum /10;
    //            }
    //             reverse(v.begin(), v.end());
    //      return v;
    //     }
    // };
}

class Solution
{
private:
    void solve(Node *root, vector<int> ans, int &count, int k)
    {
        // base case
        if (root == NULL)
        {
            return;
        }
        ans.push_back(root->data);
        // initially mei root no data nakhi didho che
        // left recursion call
        solve(root->left, ans, count, k);
        solve(root->right, ans, count, k);
        int r = ans.size();
        int sum = 0;
        for (int i = r - 1; i >= 0; i--)
        {

            sum += ans[i];

            if (sum == k)
            {
                count++;
            }
        }
        ans.pop_back();
    }

public:
    int sumK(Node *root, int k)
    {
        vector<int> ans;
        int count = 0;
        solve(root, ans, count, k);
        return count;
    }
};


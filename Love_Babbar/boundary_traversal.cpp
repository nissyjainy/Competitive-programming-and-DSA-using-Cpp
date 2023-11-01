#include <bits/stdc++.h>
using namespace std;
void lefttraversal(Node * root ,vector<int> &ans)
{
    // vector<int> ans;
    // base case
    if(root==NULL || (root->left ==NULL  && root -> right==NULL))
    {
        return ;
    }
    ans.push_back(root->data);
    // have jo left exist kare che ki nahi 
    // jo kare che to left ma ja ok 
    // aatle aa recursion walu che ok 
    if(root->left)
    {
        lefttraversal(root->left,ans);
    }
    else
    {
        lefttraversal(root->right,ans);
    }

}
void leaftraversal(Node * root,vector<int>&ans)
{
    // vector<int> v;
    // base case
    if(root==NULL)
    {
        return ;
    }
    if(root-> left == NULL && root -> right == NULL)
    {
        ans.push_back(root->data);
        return; // return atle karyu ki mare leaf node print thai gayi che to ahve aagad javani jarur nathi ok 
    }
    leaftraversal(root-> left,ans); // left ma traverse karyu che 
    leaftraversal(root->right,ans); // right ma traverse karyu che aana thi leaf aakha aai jashe ok
}
void righttraversal(Node * root,vector<int>&ans)
{
    // vector<int> sum;
    // base case
    if(root==NULL || (root->left ==NULL  && root -> right==NULL))
    {
        return ;
    }
    
    // have jo left exist kare che ki nahi 
    // jo kare che to left ma ja ok 
    // aatle aa recursion walu che ok 
    if(root->right)
    {
        righttraversal(root->right,ans);
    }
    else
    {
        righttraversal(root->left,ans);
    }
    // jo pacha aave tyare aa karvanu che ok 
    // to ek condition jo ok
    ans.push_back(root->data);
}
int main()
{
    // aama mare left traversal karvanu che leaf node ne traverse karvana che ane pachi right node ne traverse karvanu che ok
    // pehla left ma call kar ok 
    vector<int> ans;
    if(root==NULL)
    {
        return ; 
    }
    ans.push_back(root-> data); // pehla root-> data print karyo che ok 
       lefttraversal(root->left,ans); // left ma traverse karu chu 
       leaftraversal(root-> left,ans);
       leaftraversal(root-> right,ans);
       righttraversal(root->right,ans); // right ma traverse karu chu
       return ans;
}
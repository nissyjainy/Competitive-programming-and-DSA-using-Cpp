/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    int findposition(vector<int> inorder,int element)
    {
        // int n = inorder.size();
        for(int i=0;i<inorder.size();i++)

        {
              if(inorder[i]==element)
              {
                  return i;
              }
        }
        return -1;
    }
    TreeNode * solve(vector<int> inorder,vector<int>postorder,int &index,int inorderstart,int inorderend,int size)
    {
        // int n = inorder.size();
        //base case
        if(index<0 || inorderstart>inorderend )
        {
            return NULL;
        }
        //have che ne tu index find kar ok 
        int element = postorder[index--];
        //tare ahiya index is postorder index ok
        //Tree banay ok 
        TreeNode * create = new TreeNode(element);
            int position = findposition(inorder,element);
              create->right = solve(inorder,postorder,index,position+1,inorderend,size);
              create->left = solve(inorder,postorder,index,inorderstart,position-1,size);
              return create;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        //bhai tare che ne same j che ok khali tare pachad thi travaerse karvanu che ok 
        //root no right first call thashe and then left print thashe
        //tare che ne inorder ane postorder no aapyo che ok 
        //aakhu tare che ne pachad thi karvanu che ok 
         int n = inorder.size();
        int postorderindex = n-1;
       
        TreeNode * ans = solve(inorder,postorder,postorderindex,0,n-1,n);
        return ans; 
    }
};
//Time complexity - o(n2)
//tare for loop mate je tare position mate che ae tare che ne n le che ane recursive csll bhi che ok to o(n2) thashe ok 
//space to khali mare to tree j bane che ok 
//bas ok 
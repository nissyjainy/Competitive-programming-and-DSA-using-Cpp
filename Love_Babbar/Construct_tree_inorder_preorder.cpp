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
    TreeNode * solve(vector<int> inorder,vector<int>preorder,int &index,int inorderstart,int inorderend,int size)
    {
        // int n = inorder.size();
        //base case
        if(index>size || inorderstart>inorderend )
        {
            return NULL;
        }
        //have che ne tu index find kar ok 
        int element = preorder[index++];
        //tare ahiya index is postorder index ok
        //Tree banay ok 
        TreeNode * create = new TreeNode(element);
            int position = findposition(inorder,element);
            
              create->left = solve(inorder,preorder,index,inorderstart,position-1,size);
              create->right = solve(inorder,preorder,index,position+1,inorderend,size);
              return create;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //bhai tare che ne same j che ok khali tare pachad thi travaerse karvanu che ok 
        //root no right first call thashe and then left print thashe
        //tare che ne inorder ane postorder no aapyo che ok 
        //aakhu tare che ne pachad thi karvanu che ok 
         int n = inorder.size();
        int preorderindex = 0;
       
        TreeNode * ans = solve(inorder,preorder,preorderindex,0,n-1,n);
        return ans; 
    }
};
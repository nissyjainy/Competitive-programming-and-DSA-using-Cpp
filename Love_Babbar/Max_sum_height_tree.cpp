class Solution
{
   
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //base case
        if(root==NULL)
        {
            return NULL;
        }
        //recursive call ok
        int left = sumOfLongRootToLeafPath(root->left);
        int right = sumOfLongRootToLeafPath(root->right);
        int sum = 0;
        int r = 0 ; 
        if(left>right)
        {
            sum = sum + root->left->data;
        }
        else if(right>left)
        {
            sum = sum + root->right->data;
        }
        else if(left == right)
        {
             r = r + root->left->data;
             sum = sum + root->right -> data;
             if(r>sum)
             {
                 return r;
             }

        }
        return sum;
    }
};
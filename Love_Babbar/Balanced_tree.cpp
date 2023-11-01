
class Solution{
    private:
     int heights(Node * root)
    {
        //base case
        if(root==NULL)
        {
            return NULL;
        }
          long long a = heights(root-> left);
          long long b = heights(root-> right);
          long long c = max(a,b) +1;
        return c;
    }
    public:
    bool isBalanced(Node *root)
    {
       if(root == NULL)
       {
           return 1;
       }
       bool left = isBalanced(root-> left); // jo bhai aama hu shu kau chu ki tare balanced ni condition to lagay ok pan tare left ane right bhi balance che ki nahi ae bhi jovanu n 
       // atle mei banne nei call karya che ok ane check karya che ki jo NULL aave to balanced j hoy n atle base case ma bhi NULL par true return karu chu hu
       bool right = isBalanced(root-> right);
       long long  a = heights(root->left);
       long long b = heights(root-> right);
       if(abs(a-b)<=1 && left && right)
       {
           return 1;
       }
       else
       {
           return 0;
       }
       
    }
};
// APPROACH 2 
// Jo aama time complextity tare o(n2) che ok jene tane optimize karvani che ok 
pair<bool,int> balancedfast(Node * root)
// base case
{
    if(root==NULL)
    {
        pair<bool,int> p = make_pair(true,0);
        return p;
    }
    pair<int,int> left = balancedfast(root-> left); // left mate call 
    pair<int,int> right = balancedfast(root->right); // right mate call
    bool leftans = left.first;
    bool rightans = right.first;
    bool diff = abs(left.second-right.second)<=1;
    pair<bool,int> ans;
    ans.second = max(left.second,right.second)+1;
    if(leftans && rightans && diff)
    {
       ans.first = true;
    }
    else
    {
        ans.first = false;
    }

    return ans;
}
// atle banne ma mare ans rehvana j ok atle first ane second rakhvana j che banne ma ok .first karine kar tu ok 


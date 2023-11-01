class Solution
{
    public:
    bool isSumTree(Node* root)
    {
        // base case
        if(root==NULL)
        {
            return false;
        }
        int sum = 0;
        bool left = sum + isSumTree(root->left);
        int ans = 0;
        bool right = ans + isSumTree(root->right);
        if(left+right == root->data)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// Jo aama tare sum ane bool banne che atle pair valu lay ok 
// APPROACH 2
class Solution
{
    private:
    pair<bool,int> sumfast(Node* root)
    {
        //base case
        if(root==NULL)
        {
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        if(root->left==NULL && root-> right == NULL)
        {
            pair<bool,int> p = make_pair(true,root->data);
            return p;
        } 
        pair<bool,int> left = sumfast(root->left); // left call
        pair<bool,int> right = sumfast(root->right); // right call
        bool leftans = left.first; // true/false of the left side
        bool rightans = right.first; // true/false of the right side
        bool ans = root-> data == left.second + right .second;
        pair<bool,int> result;
        if(leftans && rightans && ans)
        {
            result.first = true;
            result.second = root->data + left.second + right.second;
        }
        else
        {
            result.first = false;
        }
        return result;
    }
    public:
    bool isSumTree(Node* root)
    {
         return sumfast(root).first;
    }
};
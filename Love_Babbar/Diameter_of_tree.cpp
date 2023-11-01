// HERE THE TIME COMPLEXTITY IS O(N2) AS 2 TIMES RECURSIVE CALL THAY CHE OK BUT AAPDNE OPTIMIZE KARVANU CHE 
class Solution {
    private:
    int heights(Node * root)
    {
        //base case
        if(root==NULL)
        {
            return NULL;
        }
        int a = heights(root-> left);
        int b = heights(root-> right);
        int c = max(a,b) +1;
        return c;
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
       // base case
       if(root==NULL)
       {
           return NULL;
       }
       int a = diameter(root-> left); // when left ma che diameter ok 
       int b = diameter(root-> right); // when right ma che diameter ok
       int c = heights(root-> left) + heights(root-> right) + 1;
       int d = max(a,max(b,c));
       return d;
    }
};
// APPROACH 2
pair<int,int> diameterfast(Node * root) // diameter and height
{
    //base case
    if(root==NULL)
    {
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    pair<int,int> left = diameterfast(root-> left); // left call
    pair<int,int> right = diameterfast(root->right); // right call
    int leftans = left.first; // diameter che left ni 
    int rightans = right.first; // dimeter che right ni
    int a = left.second+right.second +1;
    pair<int,int> ans;
   ans.first = max(leftans,max(rightans,a));
   ans.second = max(left.second,right.second)+1; // biju mare recursion na call mate che ok 
    return ans;
}
return diameterfast(root).first;
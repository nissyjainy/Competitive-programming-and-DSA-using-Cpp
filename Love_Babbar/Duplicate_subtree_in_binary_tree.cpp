class Solution {
    private:
    
        unordered_map<string,int> visited;
       
        string solve(Node * root)
        {
            //base case
            // if() root->left==NULL || root->right ==NULL
            // jo bhai tare koi left ane right ma NULL hoy 
            if(!root)
            {
                return "$";
            }
             string s = " ";
             // have che ne tu leaf mate kar
             if(root->left == NULL && root->right ==NULL)  //!root->left && !root->right
             {
                  s = to_string(root->data);
                  return s;
                 
             }
             s = s + to_string(root->data);
             s = s + solve(root->left);
             s = s + solve(root->right);
             visited[s]++;
             return s;
             
        }
    
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    int dupSub(Node *root) {
       // jo bhai string ma karine kar ok 
       solve(root);
        for(auto it:visited)
        {
            if(it.second>=2)
            {
                return 1;
            }
        }
        return 0;
    }
    
};
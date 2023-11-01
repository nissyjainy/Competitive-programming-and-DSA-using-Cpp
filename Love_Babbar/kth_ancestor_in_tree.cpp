/*void solve(Node * root,vector<int>path,int * k)
{
    if(root==NULL)
    {
        return;
    }
    path.push_back(root->data);
    solve(root->left,path,k);
    solve(root->right,path,k);
    
    int size = path.size();
    for(int i=size-1;i>=0;i--)
    {
       if(i-k>=0)
       {
           return path[i-k];
       }
       else
       {
           return -1;
       }
    }
}
int kthAncestor(Node *root, int k, int node)
{
   vector<int>path;
   solve(root,path,k);
   return path;
}*/


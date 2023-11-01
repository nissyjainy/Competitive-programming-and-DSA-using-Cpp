#include <bits/stdc++.h>
using namespace std;
int main()
{
    void postorder(BinaryTreeNode<int> *root , int &count)
{
    if(root==NULL)
    {
        return ;
    }
    
    
    postorder(root->left , count);
    
    postorder(root->right , count);
    if(root->left ==NULL && root->right==NULL) //NULL hoy tyare count ++ karvanu as it is 
    {
        count++;
    }
    
    
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    int cnt = 0;
    postorder(root,cnt);
    return cnt;
}
    
}
// NOrmal traversal kar ok ane jo root no left is NULL as well as root no right is NULL to leaf node che to count increase kar aenu ok 
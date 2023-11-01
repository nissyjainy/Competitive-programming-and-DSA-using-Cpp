#include <iostream>
using namespace std;
// algo written 
void Convert(TreeNode<int> *root,TreeNode<int> &head)
{
    if(root==NULL)
    {
        return ;
    }
    Convert(root->right,head);
    root->right == head;
    if(head != NULL)
    {
        head ->left = root;
    }
    head = root;
    Convert(root->left,head);
}
#include <iostream>
using namespace std;
int main()
{
    // algo j che khali ok 
    TreeNode<int> *count(TreeNode<int> *head)
    {
        int cnt = 0;
        TreeNode<int> *temp = head;
        while(temp!=NULL)
        {
            cnt++;
            temp = temp ->right;
        }
        return cnt;
    }
    TreeNode<int> *LLtoBST(TreeNode<int> *&head,int n)
    {
        if(n<=0 || root==NULL)
        {
            return NULL;
        }

        TreeNode<int> *left = LLtoBST(head,n/2);
        TreeNode<int> *root = head;
        root->left = left;
        head = head->next;
        root->right= LLtoBST(head,n-n/2-1);
        retrun root;

    }
}

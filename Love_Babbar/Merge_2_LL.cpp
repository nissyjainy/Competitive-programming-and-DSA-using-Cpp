#include <iostream>
using namespace std;
int main()
{
    //algo lakhu chu ok 
    TreeNode<int> *Merge(TreeNode<int> *head1,TreeNode<int> *head2)
    {
        TreeNode<int> *head =NULL;
        TreeNode<int> *tail=NULL;
        while(head1->data!=NULL && head2->data!=NULL)
        {
        if(head1->data<head2->data)
        {
            if(head ==NULL)
            {
               head = head1;
               tail = head1;
               head1 = head1->right;
            }
            else
            {
                tail ->right = head1;
                head1->left = tail;
                head1 = tail;  // head1 nu je che aeni jgya ae tail aave che atle at last postiion ma ok
                head1 = head1->right;
            }
        }
        else
        {
            if(head ==NULL)
            {
               head = head2;
               tail = head2;
               head2 = head2->right;
            }
            else
            {
                tail ->right = head2;
                head2->left = tail;
                head2 = tail;
               head2 = head2->right;
            }
        }
        while(head1!=NULL)
        {
                tail ->right = head1;
                head1->left = tail;
                head1 = tail;
                tail = tail ->right;      
        }
        while(head2!=NULL)
        {
               tail ->right = head2;
                head2->left = tail;
                head2 = tail;
                tail = tail ->right;

        }
        }
    }
}
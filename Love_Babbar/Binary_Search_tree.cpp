#include <iostream>
using namespace std;
class Node
{
 public:
    int data;
    Node * left;
    Node * right;

    //constructor
    Node (int d)
    {
        this ->data = d;
        this ->left = NULL;
        this -> right = NULL;
    } 
};
Node * Binarysearch(Node * &root, int d)
{
    if(root==NULL)
    {
       root = new Node(d);
       return root;

    }
    if(root->data>d)
    {
        Binarysearch(root->right , d);
    }
    else
    {
        Binarysearch(root->left , d);
    }
}
void takeinput(Node * root)
{
    int data;
    cin>>data;
    while(data !=-1)
    {
        Binarysearch(root,data);//data hu nakhu chu n atle root,data aavshe ok 
        cin>>data;
    }
}
int main()
{
    Node * root = NULL;
    cout<<"Enter the data to be entered in the tree"<<"\n";
    takeinput(root);
    return 0;

}
// deletion of the node in the BST
/*
Node * delete(Node * &root, int val)
{
    if(root==NULL)
    {
        return root;

    }
    if(root->data == val)
    {
    0 child 
    if(root->left==NULL && root->right ==NULL)
    {
        delete root;
        return NULL;
    }
    1 child 
    left case
    if(root->left!=NULL && root->right==NULL)
    {
        Node * temp = root->left;
       delete root; ahiya root delete kariye chiye ok temp na through root->left ma traverse kari didhu che ok
        return temp ;
    }
    if(root->left==NULL && root->right!=NULL)
    {
        Node * temp = root->right;
        delete root;
        return temp ;
    }
    2 child 
    if(root->left!=NULL && root->right!=NULL)
    {
        we need to find the minimum of the right side or the maximum of the left side
        int min = getmini(root->right)->data; as right mathi mini male che atle ok
        root->data = mini;
        root->right = delete(root->right,min);
        return root;



    }
    }
    elseif(root->data>val)
    {
           root->left = delete(root->left,val);
           return root;

    }
    else
    {
        root->right  = delete(root->right,val);
        return root;
    }

}*/
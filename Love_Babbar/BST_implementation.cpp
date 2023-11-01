#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    // constructor
    Node(int d)
    {
        this->data = d;
        this->left == NULL;
        this->right == NULL;
    }
};
Node *insert(Node *&root, int d) // jo d le ki data le ok koi vandho nathi
{
    // jo have data hu enter karish ok to
    if (root == NULL)
    {
        root = new Node(d); // new node banay ok
        return root;
    }
    // jo have recursion thi jo ok left ane right ok
    if (d > root->data) // temp bhi levu hoy to le ok jem ki Node * temp = new Node(d)
    {
        root->right = insert(root->right, d);
    }
    if (d < root->data)
    {
        root->left = insert(root->left, d);
    }
    return root;
}
void TakeInput(Node *&root)
{
    int data;
    cin >> data;
    if (data != -1)
    {
        insert(root, d);
        cin >> data;
    }
}
int main()
{
    Node *root == NULL;
    cout << "Enter the data to be entered"
         << "\n";
    TakeInput(root);
    // print karva mate level order trversal nakh or inorder ke postorder or preorder bhi chalshe ok
    // Insertion karine ok inorder preorder print karvanu ok
    return 0;
}

// 2.
#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*
************************************************************/
bool isBST(BinaryTreeNode<int> *root, int min, int max)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->data >= min && root->data <= max)
    {
        bool left = isBST(root->left, min, root->data);
        bool right = isBST(root->right, root->data, max);
        return left && right;
    }
    else
    {
        return false;
    }
}
bool validateBST(BinaryTreeNode<int> *root)
{
    int min = INT_MIN;
    int max = INT_MAX;
    return isBST(root, min, max);
}

// 3.
#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
int solve(BinaryTreeNode<int> *root, int &i, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    int left = solve(root->left, i, k);
    if (left != -1) // why left is not equal to -1 equal par return aave che
    {
        return left;
    }
    i++;
    if (i == k)
    {
        return root->data;
    }
    return solve(root->right, i, k);
}
int kthSmallest(BinaryTreeNode<int> *root, int k)
{
    int i;
    int ans = solve(root, i, k);
    return ans;
}

#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

bool solve(BinaryTreeNode<int> *&root)
{
    if (root == NULL)
    {
        return true;
    }

    if (root->data > root->left->data && root->right->data > root->data)
    {
        return true;
    }
    solve(root->left);
    solve(root->right);
}
bool validateBST(BinaryTreeNode<int> *root)
{
    bool correct = false;
    solve(root);
    if (solve(root) == true)
    {
        correct = true;
    }
    if (correct == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}



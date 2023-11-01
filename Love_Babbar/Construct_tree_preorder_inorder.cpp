class Solution{
    private:
    int find(int in[],int n , int  element,map<int,int>&m)
    {
        // have find kar ok 
        for(int i=0;i<n;i++)
        {
            m[in[i]]==i;
        }
    }
    Node * solve(int in[],int pre[],int &index,int start,int end,int n,map<int,int>m)
    {
        //base case
        if(index>=n || start>end)
        {
            return NULL;
        }
        // preorder mathi tu element kadh ok 
        int element = pre[index++];
       
       
        Node * temp = new Node(element);
        // have inorder ma thi search kar 
        int search = m[element];
        // recusion no call ok left and right 
        temp->left = solve(in,pre,index,start,search-1,n,m);
        temp->right = solve(in,pre,index,search+1,end,n,m);
        return temp;
        
    }
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        int preorderindex =0;
        map<int,int> m;
        find(in,n,element,m)
       Node * ans =  solve(in,pre,preorderindex,0,n-1,n,m);
        return  ans;
    }
};




//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    private:
    int find(int in[],int n , int  element,int start,int end)
    {
        // have find kar ok 
        for(int i=start;i<=end;i++)
        {
            if(in[i]==element)
            {
                return i;
            }
            return -1;
        }
    }
    Node * solve(int in[],int pre[],int &index,int start,int end,int n)
    {
        //base case
        if(index>=n || start>end)
        {
            return NULL;
        }
        // preorder mathi tu element kadh ok 
        int element = pre[index++];
       
       
        Node * temp = new Node(element);
        // have inorder ma thi search kar 
        int search = find(in,n,element,start,end);
        // recusion no call ok left and right 
        temp->left = solve(in,pre,index,start,search-1,n);
        temp->right = solve(in,pre,index,search+1,end,n);
        return temp;
        
    }
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        int preorderindex =0;
       Node * ans =  solve(in,pre,preorderindex,0,n-1,n);
        return  ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends
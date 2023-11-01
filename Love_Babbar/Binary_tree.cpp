#include <iostream>
using namespace std;
class Node
{ 
    public:
    int data;
    Node * left;
    Node * right;
   
    Node(int d)//constructor che
    {
        this -> data = d;
       this ->  left = NULL;
         this -> right = NULL;
    }
};
    Node * build(Node * root)
    {
      cout<<"Enter the data"<<"\n";
      int data;
      cin>>data;
      root = new Node(data); //node creation 
      if(data == -1)
      {
        return NULL;
      }
      cout<<"Enter the data for the left "<< data <<"\n";
      root-> left = build(root->left);
      cout<<"Enter the data for the right "<< data <<"\n";
      root ->right = build(root->right);
      return root;



    }


int main()
{
    Node * root = NULL;
    root = build(root); //recursive mate call karyu che
    return 0;
} ////
#include <iostream>
using namespace std;

int main() {
int t,i,n,a[30],b[30];
cin>>t;
for(i=0;i<t;i++)
{
    cin>>n>>a[n]>>b[n];
    for(int j =1;j<n;j++)
    {
        if(a[j]>a[j+1])
        {
            cout<<j<<"\n";
             j++;
        }
       
        else if(a[j] == a[j+1])
        {
            for(int k =1;k<n;k++)
            {
            if(b[k]>b[k+1])
            {
                cout<<k<<"\n";
                k++;
            }
            }
        }
        
    }
    
}
	return 0;
}

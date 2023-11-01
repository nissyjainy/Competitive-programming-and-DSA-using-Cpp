#include <bits/stdc++.h>
using namespace std;
int main()
{
    // creating a new node
    // constructor banay ok left right etc
    // base case ok ki temp -> data == -1 to stop left call kar right call kar ok ane return root kar ok root node create karu chu n
    // LEVEL ORDER TRAVERSAL
    void levelorder(Node * root)
    {
        queue<node *> q;
        // int root = q.front();
        // q.pop();
        // root ne kadhine queue ma push kar ok
        q.push(root);
        // initially mei first element nakhi didhu che ok pachi hu traverse karish ok
        while (!q.empty())
        {
            // queue ne to q.front thi j excess kar ok
            node *temp = q.front();
            cout << temp->data << "\n"; // aani jgya tare koi vector ma push kar ok

            q.pop();
            if (temp == NULL)
            {
                cout << endl; // enter karvanu che ok
                if (!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                // firstly mei left walo data transfer karyo ane pachi hu right walo data transfer karu chu
                if (temp->left != NULL)
                {
                    q.push(temp->left);
                }
                if (temp->right != NULL)
                {
                    q.push(temp->right);
                }
            }
        }
    }
}
void reverselevelorder(Node *root)
{
    queue<Node *> q;
    // int root = q.front();
    // q.pop();
    // root ne kadhine queue ma push kar ok
    // jo ek condition check kar ok ki
    if (!root) // if root does not exists then
    {
        return;
    }
    q.push(root);
    q.push(NULL);
    vector<int> ans;
    // initially mei first element nakhi didhu che ok pachi hu traverse karish ok
    while (!q.empty())
    {
        node *temp = q.front();
        // cout<<temp->data<<"\n"; // aani jgya tare koi vector ma push kar ok
        ans.push_back(temp->data);
        q.pop();
        if (temp == NULL)
        {
            cout << endl; // enter karvanu che ok
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // firstly mei right walo data transfer karyo ane pachi hu left walo data transfer karu chu
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
        }
    }
}
// at last ans ne reverse kar ok to reverse level order traversal thashe ok
// creating a tree throught the recursion
Node *buildtree(Node *root)
{
    cout << "Enter the data to be entered in the root"
         << "\n";
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1) // tree exist j nahi kare ok
    {
        return NULL;
    }
    cout << "Enter the left data for the tree" << data << "\n"; // root no left che ok
    root->left = buildtree(root->left);
    cout << "Enter the right data for the tree" << data << "\n"; // root no right che ok
    root->right = buildtree(root->right);
    return root;
}
// BUILD A TREE FROM LEVEL ORDER TRAVERSAL
void *buildtree(Node *&root)
{
    queue<int> q;
    cout << "Enter the data to be entered in the root"
         << "\n";
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);
    // if(data==-1)
    // {
    //     return NULL;
    // }
    while (!q.empty)
    {
        Node *temp = q.front();
        // cout<<temp->data<<"\n";
        q.pop(); // element kadhe che tu ok
        // left ane right nu le ok
        cout << "Enter the left data for the tree" << temp << "\n"; // root no left che ok
        int leftdata;
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new node(temp->left); // ek new node left ma nakhe che tu ok ane queue ma push kare che ok
            q.push(temp->left);
        }
        cout << "Enter the right data for the tree" << temp << "\n"; // root no left che ok
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(temp->right);
            q.push(temp->right);
        }
    }
}


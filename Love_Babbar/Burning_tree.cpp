class Solution
{
private:
    Node *createmapping(Node *root, int target, map<Node *, Node *> &m)
    {
        Node *res = NULL;
        queue<int> q;
        q.push(root);
        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            if (temp->data == target)
            {
                res = temp; // target node bhi find kari didhi ok level order traversal karine ok
            }
            // have mapping create kar ok
            if (temp->left)
            {
                m[temp->left] = temp;
                q.push(temp->left)
            }
            if (temp->right)
            {
                m[temp->right] = temp;
                q.push(temp->right);
            }
        }
        return res;
    }
    int burntree(Node *root, map<Node *, Node *> &m)
    {
        // ahiya 2 vastu banay ok
        // ek to queue ane ek visited wali vastu
        map<Node *, bool> visited; // visited no ek map banay ok
        queue<int> q;
        q.push(root);
        visited[root] = true; // atle root ne visit kari lidhu ok
        int ans = 0;
        bool check = false;
        while (!q.empty())
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                Node *a = q.front();
                q.pop();
                if (a->left && !visited[a->left])
                {
                    q.push(a->left);
                    check = true;
                    visited[a->left] = 1;
                }
                if (a->right && !visited[a->right])
                {
                    q.push(a->right);
                    check = true;
                    visited[a->right] = 1;
                }
                if (m[a] && !visited[m[a]]) // mapping walu ok ki mare map parent walo che ki nahi
                {
                    q.push(m[a]);
                    visited[m[a]] = 1;
                    check = true;
                }
            }
        }
        if (check == true)
        {
            ans++;
        }
        return ans;
    }

} public : 
        int minTime(Node *root, int target)
{
    // jo bhai create the node to parent mapping ok
    // pachi find the target node ok ane pachi burn the tree
    int ans = 0;
    map<Node *, Node *> m;
    Node *targetNode = createmapping(root, target, m); // ahiya aapde node j banavani che n
    burntree(targetNode, m);
    return ans;
};



    
 
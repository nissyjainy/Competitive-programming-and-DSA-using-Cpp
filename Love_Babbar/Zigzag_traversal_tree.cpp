class Solution
{
public:
    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node *root)
    {
        vector<vector<int>> result;
        // base case
        if (root == NULL)
        {
            return result;
        }
        queue<Node *> q;
        q.push(root);
        bool leftToRight = true;
        while (!q.empty())
        {
            int n = q.size();
            vector<int> v(n);
            // aakha row ne le ok atle for loop lagay ok
            for (int i = 0; i < n; i++)
            {
                Node *temp = q.front();
                q.pop();

                int index = leftToRight ? i : (n - i - 1); // jo left to right true che to i thi nakh otherwise n-i-1 thi kar
                v[index] = temp->data;
                // left nae right na elemnt nakh ok
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
            leftToRight = !leftToRight;
            result.push_back(v);
        }
        return result;
    }
};
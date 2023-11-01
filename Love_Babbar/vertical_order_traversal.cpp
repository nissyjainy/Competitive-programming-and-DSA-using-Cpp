{
public:
// Function to find the vertical order traversal of Binary Tree.
vector<int> verticalOrder(Node *root)
{
    map < int , <map<int ,<vector<int>>> nodes;
    queue<pair<Node *, pair<int, int>>> q;
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    // initially hu push karu chu
    q.push(make_pair(root, make_pair(0, 0)));
    while (!q.empty())
    {
        pair<Node *, pair<int, int>> temp = q.front();
        q.pop();
        Node *firstNode = temp.first;
        int distance = temp.second.first;
        int level = temp.second.second;
        // have map ma push kar ok
        nodes[distance][level].push_back(firstNode->data) // Node no data nakhu chu je mare ans ma joiye che ok
            // REcursive call
            if (firstNode->left)
        {
            q.push(firstNode->left);
        }
        else if (firstNode->right)
        {
            q.push(firstNode->right);
        }
        // print karvanu che ok
        for (auto i : nodes)
        {
            for (auto j : i.second) // nodes.second bhi chale
            {
                for (auto k : j.second)
                // nodes.second.second bhi chale
                {
                    ans.push_back(k);
                }
            }
        }
       
    }
    return ans;
}
};
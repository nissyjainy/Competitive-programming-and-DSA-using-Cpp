string FirstNonRepeating(string A)
{
    unordered_map<char, int> count;
    queue<int> q;
    string ans = "";
    for (int i = 0; i < A.length(); i++)
    {
        count[A[i]]++; // map ma count increase karyu che ok
        q.push(A[i]);

        while (!q.empty())
        {
            if (count[q.front()] > 1)
            {
                q.pop();
            }
            else
            {
                ans.push_back(q.front());
                break;
            }
        }
        if (q.empty())
        {
            ans.push_back('#');
        }
    }
    return ans;
}
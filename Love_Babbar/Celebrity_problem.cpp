class Solution
{
private:
    bool knows(vector<vector<int>> &M, int a, int b, int n)
    {
        if (M[a][b] == 1) // matrix ma check kar ok ki 1 che ki nathi ok
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            s.push(i); // badha j element mei satck ma nakhya ok
        }
        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            // 2 elements kadhya ok
            if (knows(M, a, b, n))
            {
                s.push(b); // a b ne jane che
            }
            else
            {
                s.push(a);
            }
        }
        int ans = s.top(); // ek j element baki che tyare ok
        // single element ne verify kar ok
        bool zerocount = false;
        int zero = 0;
        // row check karvani che ok
        for (int i = 0; i < n; i++)
        {
            if (M[ans][i] == 0)
            {
                zero++;
            }
        }
        if (zero == n) // atke badha j element ek row ma 0 che ok
        {
            zerocount = true;
        }
        bool onecount = false;
        int one = 0;
        // column check karvani che ok
        for (int i = 0; i < n; i++)
        {
            if (M[i][ans] == 1) // column check kar tu ok
            {
                one++;
            }
        }
        if (one == n - 1) // atke badha j element ek row ma 0 che ok
        // diagonal element 0 hoy ok
        {
            onecount = true;
        }
        if (zerocount == true && onecount == true)
        {
            return ans; // ahiya candidate return karvanu che
        }
        else
        {
            return -1;
        }
    }
};

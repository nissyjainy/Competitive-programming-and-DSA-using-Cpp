#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, n;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            v.push_back(abs(a[i + 1] - a[i]));
        }
        int k = 0;
        int mini = INT_MAX;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] < mini)
            {
                mini = v[i];
                k = i;
            }
        }
        if (i == 0)
        {
            cout << v[0] << "\n";
        }
        else
        {
            max(v[i + 1], v[i - 1]);
        }
    }
    return 0;
}


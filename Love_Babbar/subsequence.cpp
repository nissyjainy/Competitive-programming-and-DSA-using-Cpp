#include <bits/stdc++.h>
#include <iostream>
#define int long long int
using namespace std;
void subsequences(vector<int> &v, vector<int> &temp, int i, int n)
{
    if (i == n)
    {
        for (auto x : temp)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    temp.push_back(v[i]);
    subsequences(v, temp, i + 1, n);
    temp.pop_back();
    subsequences(v, temp, i + 1, n);
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        vector<int> temp;
        subsequences(v, temp, 0, n);
    }
    return 0;
}


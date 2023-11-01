#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // jo even aaya to yes otherwise no ok
    // 	frequency even che ki nahi check kar ok
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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[v[i]]++;
        }
        int j = 0;
        for (auto x : m)
        {
            if ((x.second) % 2 != 0)
            {
                j = 1;
            }
        }
        if (j == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, n1, n2, n3;
    cin >> t;

    for (i = 0; i < t; i++)
    {
        cin >> n1 >> n2 >> n3;
        vector<int> v;
        vector<int> vec;
        int n = max(n1, max(n2, n3));
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[v[i]]++;
        }
        for (auto x : m)
        {
            if (x.second >= 2)
            {
                vec.push_back(x.second);
            }
        }
    }
    cout << vec.size() << "\n";
    cout << vec << "\n";

    return 0;
}


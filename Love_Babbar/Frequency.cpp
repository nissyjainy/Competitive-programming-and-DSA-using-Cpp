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
            // if((x.second())%2==0){
            //     j=1;
            // }
            cout << x.second << " ";
        }
        if (j == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}


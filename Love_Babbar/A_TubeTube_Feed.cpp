#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int tc;
    cin >> tc;
    for (int r = 0; r < tc; r++)
    {
        int n;
        int t;
        cin >> n >> t;
        int a[n];
        int b[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (t == 0)
        {
            cout << "-1" << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                if (t >= a[i])
                {
                    v.push_back(b[i]);
                }
                t = t - 1;
            }
            int flag = 0;
            int maxi = INT_MIN;
            int k = 0;
            for (int i = 0; i < v.size(); i++)
            {

                maxi = max(maxi, v[i]);
            }
            for (int i = 0; i < n; i++)
            {
                if (b[i] == maxi)
                {
                    flag = 1;
                    k = i;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << k + 1 << "\n";
            }
            else
            {
                cout << "-1"
                     << "\n";
            }
        }
    }
    return 0;
}


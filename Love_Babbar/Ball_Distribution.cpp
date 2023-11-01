#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, n, m;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n >> m;
        // int a[m];
        vector<int> v;
        int sum = 0;

        // for (int i = 0; i < m; i++)
        // {
        //     cin >> a[i];

        // }
        for (int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
            sum = sum + temp;
        }
        /*if ((n - ((n * m) - sum)) >= 0)
        {
            cout << (n - ((n * m) - sum)) << "\n";
        }
        else
        {
            cout << "0"
                 << "\n";
        }*/

        if (n == m)
        {
            int k = *min_element(v.begin(), v.end());
            if (sum <= m && k <= m)
            {
                cout << "0"
                     << "\n";
            }
            else if (sum > m && k <= m)
            {
                cout << k << "\n";
            }
        }
        else if (n > m)
        {
            int d = *min_element(v.begin(), v.end());
            if (d >= m)
            {
                cout << m << "\n";
            }
            else
            {
                cout << d << "\n";
            }
        }
        else if (n < m)
        {
            int r = *min_element(v.begin(), v.end());
            if (r == n)
            {
                cout << n << "\n";
            }
            else if (r < n)
            {
                cout << r << "\n";
            }
        }
    }

    return 0;
}

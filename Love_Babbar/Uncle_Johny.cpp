#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, k, n;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        cin >> n;
        int a[n];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        cin >> k;
        int d = a[k]; // d == 3;
        // cout<<d<<"\n";
        sort(a + 1, a + n + 1); // 1 2 3 4
        for (int i = 1; i <= n; i++)
        {
            // cout<<a[i]<<d<<"\n";
            if (a[i] == d)
            {
                cout << i << "\n";
            }
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
// bahu close che yaar
int main()
{
    int i, t, n, d;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n >> d;
        int a[n];
        int count = 0;
        int ans = 0;
        int ent = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j] <= 9)
            {
                count++;
            }
            else if (a[j] >= 80)
            {
                ans++;
            }
            else
            {
                ent++;
            }
        }
        if (count > 0 && ans == 0)
        {
            cout << ((count / d) + (count % d)) + ((ent / d) + (ent % d)) << "\n";
        }
        else if (ans > 0 && count == 0)
        {
            cout << ((ans / d) + (ans % d)) + ((ent / d) + (ent % d)) << "\n";
        }
        else if (ans > 0 && count > 0)
        {
            int k = ans + count;
            cout << ((k / d) + (k % d)) + ((ent / d) + (ent % d)) << "\n";
        }
        else if (ans == 0 && count == 0)
        {
            cout << ((ent / d) + (ent % d)) << "\n";
        }
    }
    return 0;
}


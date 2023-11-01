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
        int d;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int j = n - 2; j >= 0; j--)
        {
            if (a[n - 1] != a[j])
            {
                d = a[n - 1] + a[j];
            }
        }
        cout << d << "\n";
    }
    // sort kar ok pachi check kar ki last == second last ok jo che to second last wala pointer ne 1 minus kari de ok else nathi to simply add kari de ok
    return 0;
}

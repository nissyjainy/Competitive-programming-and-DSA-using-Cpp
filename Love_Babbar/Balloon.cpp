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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if ((a[0] == '1' || a[0] == '2' || a[0] == '3' || a[0] == '4' || a[0] == '5' || a[0] == '6' || a[0] == '7') && (a[n - 1] == '1' || a[n - 1] == '2' || a[n - 1] == '3' || a[n - 1] == '4' || a[n - 1] == '5' || a[n - 1] == '6' || a[n - 1] == '7'))
        {
            cout << n << "\n";
        }
        else if ((a[n - 1] == '1' || a[n - 1] == '2' || a[n - 1] == '3' || a[n - 1] == '4' || a[n - 1] == '5' || a[n - 1] == '6' || a[n - 1] == '7') && (a[0] != '1' || a[0] != '2' || a[0] != '3' || a[0] != '4' || a[0] != '5' || a[0] != '6' || a[0] != '7'))
        {
            cout << n << "\n";
        }
        else if ((a[n - 1] != '1' || a[n - 1] != '2' || a[n - 1] != '3' || a[n - 1] != '4' || a[n - 1] != '5' || a[n - 1] != '6' || a[n - 1] != '7') && (a[0] == '1' || a[0] == '2' || a[0] == '3' || a[0] == '4' || a[0] == '5' || a[0] == '6' || a[0] == '7'))
        {
            cout << n - 1 << "\n";
        }
        else if ((a[n - 1] != '1' || a[n - 1] != '2' || a[n - 1] != '3' || a[n - 1] != '4' || a[n - 1] != '5' || a[n - 1] != '6' || a[n - 1] != '7') && (a[0] != '1' || a[0] != '2' || a[0] != '3' || a[0] != '4' || a[0] != '5' || a[0] != '6' || a[0] != '7'))
        {
            cout << n - 1 << "\n";
        }
    }
    return 0;
}


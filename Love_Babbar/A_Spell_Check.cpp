#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, n;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
    string s;
    cin >> s;
    string str = "Timru";
    sort(s.begin(), s.end());

    if (s.compare(str) == 0)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
}
}

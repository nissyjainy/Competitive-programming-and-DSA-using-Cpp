#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t;
    long long int n;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        long long int s[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s, s + n);
        for (int j = 0; j < n; j++)
        {
            v.push_back(s[j + 1] - s[j]);
        }
        cout << *min_element(v.begin(), v.end()) << "\n";
    }
    return 0;
}

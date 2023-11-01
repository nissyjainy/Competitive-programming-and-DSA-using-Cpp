#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int32_t main()
{
    fio;
    string s;
    cin >> s;
    string t;
    cin >> t;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
        mp[s[i]]++;
    int count_oddf = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second % 2 == 1)
            count_oddf++;
    }
    if (count_oddf == 0 || count_oddf == 1)
        cout << "YES";
    return 0;
}
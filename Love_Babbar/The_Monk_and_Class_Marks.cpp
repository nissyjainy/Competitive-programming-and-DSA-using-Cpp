#include <bits/stdc++.h>
using namespace std;
int main()
{
    // map no question che
    map<int, multiset<string>> m;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int p;
        cin >> p;
        // sadu map ma add kar ok
        m[-1 * p].insert(s);
    }
    for (auto &it : m)
    {
        int marks = it.first;
        auto &name = it.second;
        // have mare access karvanu che khali ok
        for (auto element : name)
            cout << element << " " <<  -1 * marks << endl;
    }
}

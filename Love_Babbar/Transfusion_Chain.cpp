#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        // jo bhai aa question ma hu shu kau chu ki tari pase string che ok aene traverse karine khali number j output karvano che ok
        cin >> n;
        vector<string> v;
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if (s == "A")
            {
                a++;
            }
            else if (s == "B")
            {
                b++;
            }
            else if (s == "AB")
            {
                c++;
            }
            else
            {
                d++;
            }
            v.push_back(s);
        }
        cout << (d + c + max(a, b)) << "\n";
    }
    return 0;
}
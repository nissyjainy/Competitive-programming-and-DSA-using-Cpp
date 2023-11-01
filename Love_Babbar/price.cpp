#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
 int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
    int n, w, h;
 int b;
        int p;
        cin >> n >> b;
        int maxi = INT_MIN;
        int j =0;
        for (int i = 0; i < n; i++)
        {
            cin >> w >> h >> p;
            if (p <= b)
            {
                maxi = max(w * h, maxi);
                j = 1;
            }
            
        }
        if(j==1)
        {
            cout << maxi << "\n";
        }

        else
        {
            cout << "no tablet"<< "\n";
        }
    }

return 0;
}

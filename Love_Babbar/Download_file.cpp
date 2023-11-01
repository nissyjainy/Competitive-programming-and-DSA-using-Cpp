#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, n, k;
    cin >> t;

    for (i = 0; i < t; i++)
    {
        cin >> n >> k;
        int T[n];
        int D[n];
        for (int i = 0; i < n; i++)
        {
            cin >> T[i];
            cin >> D[i]; // ahiya mei bhul kari ti shu kari ki 2 ne alag alag cin lidha che atle bhul thati ti
        }

        //  int remaining  = k;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (T[i] <= k)
            {
                k = k - T[i]; // aa difference ochu karva mate che
            }
            // minus karta karta aa condition satisfy nahi thay 
            else
            {
                sum = sum + (k - T[i]) * D[i]; // else ma T[i] - remaining thashe as aama T[i] vadhare che as compared to remaining
                k = 0;                         // last ma k or remaining 0 thai jashe ok
            }
        }
        cout << abs(sum) << "\n";
    }
    return 0;
}

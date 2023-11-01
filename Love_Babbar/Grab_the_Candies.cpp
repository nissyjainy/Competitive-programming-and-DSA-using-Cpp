#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, n;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> t >> n;
        int arr[n];
        int even = 0;
        int odd = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            if (arr[j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even > odd)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << "No"
                 << "\n";
        }
    }
}

#include <iostream>
using namespace std;
// THE WHOLE CODE IS CORRECT BUT NOT CONSIDERED THE EQUAL AND THE NITIN CASE WILL DO AFTERWARDS.
int main()
{
    int i, t, a, b, c, d;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> d;
        if (a > b)
        {
            int e = b + c;
            if (a > e)
            {
                int f = b + c + d;
                if (a > f)
                {
                    cout << "N"
                         << "\n";
                }
                else
                {
                    cout << "S"
                         << "\n";
                }
            }
            else
            {
                int g = a + d;
                if (g > e)
                {
                    
                        cout << "N"
                             << "\n";
                    
                }
                    else
                    {
                        cout << "S"
                             << "\n";
                    }
                
            }
        }
        else
        {
            int w = a+c;
            if(w<b)
            {
                int h = a+c+d;
                if(h<b)
                {
                    cout<<"S"<<"\n";
                }
                else
                {
                    cout<<"N"<<"\n";
                }
            }
            else
            {
                int k = b+d;
                if(w<k)
                {
                    cout<<"S"<<"\n";
                }
                else
                {
                    cout<<"N"<<"\n";
                }
            }
        }
    }

return 0;
}

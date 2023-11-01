#include <iostream>
using namespace std;

int main()
{
    int i, t, n, k;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n >> k;
        int a[n];
        int one = 0;
        int two = 0;
        int three = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == i + 1)
            {
                cout << "0"
                     << "\n";
               
            }
            else
            {

                if (a[i] == '1')
                {
                    one++;
                }
                else if (a[i] == '2')
                {
                    two++;
                }
                else if (a[i] == '3')
                {
                    three++;
                }
            }
            if (one >= k)
            {
                cout << one << "\n";
            }
            else if (two >= k)
            {
                cout << two << "\n";
            }
            else
            {
                cout << three << "\n";
            }
        }
    }
    return 0;
}
  






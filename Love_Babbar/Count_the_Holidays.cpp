#include <iostream>
using namespace std;

int main()
{
    int  t,j;
    cin >> t;
    for (j = 0; j < t; j++)
    {
        int n,i;
        cin >> n;
        int a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
           
        for(int i=0;i<n;i++)
        {
            if ((a[i] != 6) || (a[i] != 13) || (a[i] != 20) || (a[i] != 27) || (a[i] != 7) || (a[i] != 14) || (a[i] !=21)||(a[i] !=28))
            {
                count++;
                cout << a[i];
            }
        }

        cout << (8 + count) << "\n";
    }
    return 0;
}

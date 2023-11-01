#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, n, u, d;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n >> u >> d;
        int count = 0;
        int ans = 0;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        for (int a = 0; a < n; a++)
        {
            // case 1 jyare badha equal che
            if (arr[a] = arr[a + 1])
            {
                count = n;
                break;
            }
        }

        for (int b = 0; b < n; b++)
        {
            // case 2 taller mate
            if (arr[i + 1] > arr[i])
            {
                if (abs(arr[b] - arr[b + 1]) <= u)
                {
                    ans++;
                }
                else
                {
                    continue;
                }
            }
            // case 3 smaller mate
            else if (arr[i + 1] < arr[i])
            {
                if (abs(arr[b] - arr[b + 1]) <= d)
                {
                    ans++;
                }
                else
                {
                    continue;
                }
            }
        }

        cout << count + ans << "\n";
    }
    return 0;
}

    
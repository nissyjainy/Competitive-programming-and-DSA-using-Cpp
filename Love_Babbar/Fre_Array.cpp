#include <iostream>
using namespace std;
int main()
{
    int maxi = 0;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) // this for loop is for the fact that how many elements is to be taken in the fre array
    {
        maxi = max(maxi, a[i]);
    }
    int fre[maxi + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        fre[a[i]]++;
    }
    // printing kar ok
    for (int i = 0; i < maxi + 1; i++) // ahiya frequency mate vaat thay che ok atle fre[i] use thay che
    {
        if (fre[i] != 0)
        {
            // cout << i << " " << fre[i] << "\n";
            cout << max(fre[i], maxi);
        }
    }
}


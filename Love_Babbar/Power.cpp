#include <bits/stdc++.h>
using namespace std;
#define int long long int
int ans(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    int pow = power(a, b / 2);
    if (b % 2 == 0)
    {
        return pow * pow;
    }
    else
    {
        return pow * pow * a;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = power(a, b); // a^b
    return ans;
}
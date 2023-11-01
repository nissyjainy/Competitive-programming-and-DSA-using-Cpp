#include <bits/stdc++.h>
using namespace std;
#define int long long int
int main()
{ // recursion approach
    int binExpRec(int a, int b)
    {
        if (b == 0)
        {
            return 1;
        }
        int ans = binExpRec(a, b / 2);
        if (b % 2 == 0)
        {
            return (ans * ans) % mod;
        }
        else
        {
            return (a * (ans * ans) % mod) % mod;
        }
    }
}
// iterative approach
int binExpIte(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b % 2 == 1) // zeroth bit is 1
        {
            ans = ans * a;
        }
        a = a * a; // pachi mod lagay ok ane 1LL kar ok
        b >>= 1;   // right shift ok
    }
    return ans;
}
int binMul(int a, int b) // here both a nad b are 10^18 na che ok atle jo M bhi atlu hoy to multiply na thay to aa use karyu che ok
{
    int ans = 0;
    while (b > 0)
    {
        if (b % 2 == 1) // zeroth bit is 1
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M; // pachi mod lagay ok ane 1LL kar ok
        b >>= 1;         // right shift ok
    }
    return ans;
} // This can be used in the cases where we need to multiply 2 numbers jya numbers bahuj mota hoy che ok


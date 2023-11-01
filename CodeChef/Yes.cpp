#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin>>s;
        s[0] = toupper(s[0]);
        s[1] = toupper(s[1]);
        s[2] = toupper(s[2]);
        if(s=="YES")
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
}
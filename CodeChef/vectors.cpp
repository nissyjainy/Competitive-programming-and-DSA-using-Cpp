#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main()
{ 
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<a.size();i++)
    {
   cin >>a[i];
    }
int minimum_element = *min_element(a.begin(),a.end());
cout << minimum_element <<"\n";
}

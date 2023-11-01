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
vector<int> v;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    v.push_back(temp);
}int k;
cin>>k;
int i=0;
  for( i=0;i<n/k;i+=(k)){
        reverse(v.begin()+i,v.begin()+k+i);
    }
    // i-=k;
    reverse(v.begin()+i,v.end());
for(auto x:v){
    cout<<x<<" ";
}
    return 0;
}

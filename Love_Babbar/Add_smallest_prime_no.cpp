#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main(){
    fio;
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int k=0,j=0;
    int prime=0;
    int s=0;
    if(x%2==0){
        prime=2;
    }
    else if(x%3==0){
        prime=3;
    }
    else if(x%5==0){
        prime=5;
    }
    else{
        prime=7;
    }
    x=x+prime;
    s++;
    k=y-x;
    k=k/2;
    if(y%2==0){
    j=k+s;

    }
    else{
        j=k+s+1;
    }
    cout<<j<<endl;
    }
}
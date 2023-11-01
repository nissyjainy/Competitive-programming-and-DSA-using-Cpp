#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
int n;
cin>>n;
vector<int> v;

for(int i=0;i<n;i++){
int num;
cin>>num;
v.push_back(num);
}for(int i=0;i<n;i++){
auto lb=lower_bound(v.begin(),v.begin()+n,v[i]);
auto ub=upper_bound(v.begin(),v.begin()+n,v[i]);
cout<<ub-lb<<endl;
}
    }
return 0;
    }
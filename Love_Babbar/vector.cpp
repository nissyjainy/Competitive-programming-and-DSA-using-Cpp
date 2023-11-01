
#include <bits/stdc++.h>
using namespace std;
int main() {
 vector<int> v;
 v.push_back(1);
 v.push_back(2);
 v.push_back(3);
 v.push_back(4);
 cout<<"Before rotation"<<"\n";
 for(int i:v)
 {
     cout<<i<<" ";
 }
 cout<<"After rotation"<<"\n";
 rotate(v.begin(),v.begin()+2,v.end());
 for(int i:v)
 {
     cout<<i<<" ";
 }
 
    return 0;
}
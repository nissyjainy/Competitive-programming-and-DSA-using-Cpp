#include <bits/stdc++.h>
using namespace std;

int main() {
   int i,n1,n2,n3;
   

       cin>>n1>>n2>>n3;
       vector<int> v;
       vector <int> vec;
       int n =n1+n2+n3;
       for(int i=0;i<n;i++)
       {
           int temp;
           cin>>temp;
           v.push_back(temp);
       }
       map<int,int> m;
       for(int i=0;i<n;i++)
       {
           m[v[i]]++;
       }
       for(auto x:m)
       {
           if(x.second>=2)
           {
               vec.push_back(x.first);
           }
    
       }
    
   
      
   
   cout<<vec.size()<<endl;
   for(auto x:vec){
       cout<<x<<endl;
   }
   
	return 0;
}

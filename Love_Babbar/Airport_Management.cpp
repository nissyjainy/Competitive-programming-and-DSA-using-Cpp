// AAMA MARE COUNT WALA MA KAI BHUL THAY CHE JO ANE SIKH YAAR PLEASE
// UNORDERED MAP USE KAR YAAR
#include <bits/stdc++.h>
using namespace std;

int main() {
   int i,t,n;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>n;
       vector<int> v;
       vector<int> max;
       int a[n];
       int d[n];
       int count = 0;
      
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
     
       for(int i=0;i<n;i++)
       {
           cin>>d[i];
       }
       for(int i=0;i<n;i++)
       {
           v.push_back(a[i]);
           v.push_back(d[i]);
           
       }
       sort(v.begin(),v.end());
       /*
       for(int i=0;i<v.size();i++)
       {
           for(int j =i+1;j<v.size();j++)
           {
               if(v[i]==v[j])
               {
                   count++; // aama count ne fari initialize kar ok aevu kai logic aavshe ok
                   
               }
              max.push_back(count);
           }
            
       }
       cout<<*max_element(max.begin(),max.end())+1<<"\n";
       */
       
    //    ahiya mare max occurence kadh va ma bhul pade che yaar
   }
	return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
   int i,t,n;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>n;
       vector<int> v;
       
       int s = v.size();
       vector<int> freq(s);
       vector<int> max(s);
       int a[n];
       int d[n];
       int count = 0;
       int visited = -1;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
     
       for(int i=0;i<n;i++)
       {
           cin>>d[i];
       }
       for(int i=0;i<n;i++)
       {
           v.push_back(a[i]);
           v.push_back(d[i]);
           
       }
       sort(v.begin(),v.end());
       
      
       for(int i=0;i<v.size();i++)
       {
           for(int j =i+1;j<v.size();j++)
           {
               if(v[i]==v[j])
               {
                   count++;
                   freq[j] = visited;
                   
               }
               if(freq[i]!=visited)
               {
                   freq[i] =count;
               }
             
           }
            
       }
       for(int i=0;i<s;i++)
       {
           max.push_back(freq[i]);
       }
       cout<<*max_element(max.begin(),max.end())<<"\n";
       
       
       
       
   }
	return 0;
}

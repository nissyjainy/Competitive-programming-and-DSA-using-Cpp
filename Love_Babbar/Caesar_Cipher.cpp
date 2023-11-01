#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,q,n;
    string s;
    string t;
    string u;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>n;
        cin>>s;
        cin>>t;
        cin>>u;
        vector<int> v;
        vector<int> vec;
        vector<char> ve;
        string se ="";
        for(int i= 0;i<s.length();i++)
        {
            v.push_back(s[i]-'0');
        }
        for(int i= 0;i<t.length();i++)
        {
            vec.push_back(t[i]-'0');
        }
        int d = (vec[0]-v[0]);
        if(d<0)
        {
            d=d+26;
        }
        for(int i=0;i<n;i++)
        {
            int p = u[i] + d;
            if(p>122)
            {
                p = p- 26; // aa circullar mate ok else tare bhi biji symbols jeva aai jashe ok 
            }
           
            ve.push_back(char(p));
            
        }
        for(int i=0;i<n;i++)
        {
           // se = se + ve[i];
           se.push_back(ve[i]);
        }
        cout<<se<<"\n";
        
    }
	return 0;
}

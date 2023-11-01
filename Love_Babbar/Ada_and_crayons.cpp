#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >>t;
    while(t--)
    {
        string s;
        cin >> s;
        int n=s.size(),e=0,d=0;
        string s1="";
        for(i=0;i<n;i++)
        {
            if(s[i]=='U')
            s1+='1';
            else
            s1+='0';
        }
        if(n>=2)
        {
        for(i=0;i<n-1;i++)
        {
            if(s1[i]=='1' && s1[i+1]=='0')
            {
                e++;
                d++;
            }
            else if((s1[i]=='0'&& s1[i+1]=='1'))
            {
                e++;
            }
        }
        if(e!=0 && )
        cout << (e<=d?e:d) << "\n";
        }
        else
        cout << "0" << "\n";
    }
    return 0;
}

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
    string s;
    cin>>s;

    {
        vector<int> v;
        for(int i=0;i<s.size();i++)
        {
            string temp;
            while(s[i]>='0'&&s[i]<='9'&&i<s.size()) //alter use isdigit(s[i]);
            {
                temp.push_back(s[i]);
                i++; 
            }
            if(temp.size())
            v.push_back(stoi(temp));
        }
        for(int i=1;i<v.size();i++) //Checking if array is strictly increasing;
        {
            if(v[i]<=v[i-1])
                return false;
        }
        return true;
    }
}
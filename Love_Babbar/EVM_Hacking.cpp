#include <bits/stdc++.h>
using namespace std;

int main() {
int i,t,a,p,b,q,c,r;
cin>>t;
for(i=0;i<t;i++)
{
    cin>>a>>b>>c>>p>>q>>r;
    float d = p+q+r;
    int maxi = max(p,max(q,r));
    int mini = min(a,min(b,c));
    int q = a+b+c+maxi-mini;
    if(q>=(d/2))
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
}
	return 0;
}

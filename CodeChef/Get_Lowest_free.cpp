#include <iostream>
using namespace std;

int main() {
int i,t,a,b,c;
cin>>t;
for(i=0;i<t;i++)
{ 
    cin>>a;
    cin>>b;
    cin>>c;
    
    if(a>b && b>c && a>c)
    {
        cout<<a+b<<"\n";
    }
    else if(b>a && a>c && b>c)
    {
        cout<<a+b<<"\n";
    }
    else if(a>c && c>b && a>b)
    {
        cout<<a+c<<"\n";
    }
    else if(c>a && a>b && c>b)
    {
        cout<<a+c<<"\n";
    }
    else if(b>c && a>c && b>a)
    {
        cout<<b+c<<"\n";
    }
    else if(c>b && b>a && c>a)
    {
        cout<<b+c<<"\n";
    }
    else if(a==b && b==c && a==c)
    {
         cout<<b+c<<"\n";
    }
    else if((a==b) && a>c)
    {
        cout<<b+a<<"\n";
    }
    else if((a==b) && c>a)
    {
        cout<<b+c<<"\n";
    }
     else if((a==c)&&a>b)
    {
        cout<<a+c<<"\n";
    }
    else if((a==c) && b>a)
    {
        cout<<b+c<<"\n";
    }
     else if((c==b) && b>a)
    {
        cout<<b+c<<"\n";
    }
    else if((c==b) && a>b)
    {
        cout<<a+b<<"\n";
    }
}
	return 0;
}

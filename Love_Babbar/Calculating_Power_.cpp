#include <iostream>
using namespace std;
#include <math.h>
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    
    int ans = power(a,b/2);
    if(b%2==0)
    {
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
  
    
   
}
int main()
{
    int a,b;
    cin>>a>>b;
    power(a,b);
    cout<<"The power of the given number is "<< power(a,b)<<"\n";
}


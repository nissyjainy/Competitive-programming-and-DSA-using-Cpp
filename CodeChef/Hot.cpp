#include <iostream>
using namespace std;
int main(void)
 {  
    int i ,t ,N;

    cin>>t;
    for(i=0;i<t;i++)
    {

	cin>>N;
	if(N>20)
	{
	    cout<<("Hot");
	}
	else
	{
	    cout<<("Cold");
	}
    }
	return 0;
}

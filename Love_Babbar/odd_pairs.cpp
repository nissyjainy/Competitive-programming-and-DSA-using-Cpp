#include <iostream>
using namespace std;

int main() {
	  int i,t;
	  long long int n;
	  cin>>t;
	  for(i=0;i<t;i++)
	  { // valid for n == odd 
	      cin>>n;
          // cout<<(n*n)/2<<"\n"
          // aa sachu che ok
	      int odd = (n/2)+1;
	      int even = n - odd;
	      int p = odd*odd - odd;
	      int q = even* even + even;
	      cout<<p+q<<"\n";
	  }
	return 0;
}


// in this question mei string laine karyu hatu o ane compare karya hata badha j char ok 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{  
	  int N;  
	  cin>>N;
	  string s;
	  cin>>s;
	  int ind = count(s.begin(),s.end(),'I'); 
	  int notind = count(s.begin(),s.end(),'Y');
	  if(ind>=1)
	  {
	      cout<<"INDIAN"<<"\n";
	  }
	  else if(notind>=1)
	  {
	      cout<<"NOT INDIAN"<<"\n";
	  }
	  else
	  {
	      cout<<"NOT SURE"<<"\n";
	  }
	}
	return 0;
}




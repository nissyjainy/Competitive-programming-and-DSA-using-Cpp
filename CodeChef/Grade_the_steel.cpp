/*#include <iostream>
using namespace std;

void solve(){
    int h,te;
    float c;
    cin>>h;
    cin>>c;
    cin>>te;

      if(h>50 && c<0.7 && te>5600)
      {
          cout<<"10"<<"\n";
          return;
      }
      else if(h>50 && c<0.7 && te<5600)
      {
          cout<<"9"<<"\n";
          return;
      }
      else if(h<50 && c<0.7 && te>5600)
      {
          cout<<"8"<<"\n";
          return;
      }
      else if(h>50 && c>0.7 && te<5600)
      {
          cout<<"7"<<"\n";
          return;
      }
      else if(h>50 || c<0.7 || te>5600)
      {
          cout<<"6"<<"\n";
            return;
      }
      else
      {
          cout<<"5"<<"\n";
          return;
      }
}

int main() {
  int t,i;
  cin>>t;
  for(i=0;i<t;i++)
  {
    solve();
  }
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
  int i,t,r1,r2,w1,w2,c1,c2;
  cin>>t;
  for(i=0;i<t;i++)
  {

      cin>>r1>>r2>>w1>>w2>>c1>>c2;
      if((r1>r2 && c1>c2)||(r1>r2 && w1>w2)||(c1>c2 && w1>w2)||(r1>r2 && w1>w2 && c1>c2))
      {
          cout<<"A"<<"\n";
      }


      else
      {
          cout<<"B"<<"\n";
      }
  }

    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
	int t;
    int multiply = 1;
	cin>>t;
	for(int i=0;i<t;i++)
	{   
	    int n;
	    cin>>n;
	    int a[n];
	    for(int j=0;j<n;j++)
        {
        cin>>a[j];
        multiply = multiply * a[j];
        }
	   
        if(multiply>=0)
        {
            cout<<"0"<<"\n";
        }
	    
        else
        {
            cout<<"1"<<"\n";
        }
    }
	return 0;
}
/*#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{   
	    int n;
	    cin>>n;
	    int a[n];
	    for(int j=0;j<n;j++) cin>>a[j];
	    int cnt = 0;
	    int cnt_zero = 0;
	    for(int i = 0; i < n; i++){
	        if(a[i] < 0) cnt++;
	        if(a[i] == 0) cnt_zero++;
	    } 
	    if((cnt % 2 == 0) || cnt_zero > 0) cout << 0 << "\n";
	    else if((cnt_zero == 0) && (cnt % 2 != 0)) cout << 1 << "\n";
	}
	return 0;
}*/
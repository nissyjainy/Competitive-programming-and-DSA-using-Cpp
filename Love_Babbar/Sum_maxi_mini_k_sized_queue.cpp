#include <iostream>
#include <queue>
using namespace std;
int solve(int *arr,int n,int k)
{
    deque <int> maxi(k);
    deque <int> mini(k);
    //for 1st k numbers
   
    for(int i=0;i<k;i++)
    {
        while(!maxi.empty() && arr[maxi.back()]<=arr[i])
        {
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()]>=arr[i])
        {
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }
     int ans=0; 
    ans = ans + arr[maxi.front()] +arr[mini.front()];
    //bija mate ok remaval and addition
    for(int i =k;i<n;i++)
    {
        //removal
        while(!maxi.empty() && i-maxi.front()>=k)
        {
            maxi.pop_front();
        }
        while(!mini.empty() && i-mini.front()>=k)
        {
            mini.pop_front();
        }
        //addition
         while(!maxi.empty() && arr[maxi.back()]<arr[i])
        {
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()]>arr[i])
        {
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
         ans = ans + arr[maxi.front()]+arr[mini.front()];
    }
    return ans;
}
int main()
{
    int arr[7]={2,5,-1,7,-3,-1,-2};
    int k =4;
   cout<< solve(arr,7,k)<<"\n";
}



#include <iostream>
using namespace std;

int main() {
	int i,t,s,x,y,z;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>s>>x>>y>>z;
	    if(s-(x+y)>0)
	    {
	        if(s-(x+y)>=z)
	        {
	        cout<<"0"<<"\n";
	        }
	        else 
	        {
	            cout<<"1"<<"\n";
	        }
	    }
	    else if(s-(x+y)==0) 
	    {
	       if(x+y>z)
	       {
	           cout<<"1"<<"\n";
	       }
	       else if(x+y==z)
	       {
	            cout<<"2"<<"\n";
	       }
	       
	    }
	     
	}
	return 0;
}

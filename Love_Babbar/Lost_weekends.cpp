#include <iostream>
using namespace std;

int main() {
	int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    
	    int a[10];
	    int sum = 0;
	    for(int i =0; i < 6 ;i++)
	    { 
	        cin>>a[i];
	    } // jo bhai aama array 6 ni che ok ama a[5] = p che ok atle sum kadhine a[4] solve kar ok 
	   
	    for(int i=0;i<5;i++)
	    {
	        sum = sum + a[i]; // a[4] nu sum find kar ok 
	    }
	    if((a[5]*sum)/5 == 24) // these are the conditions
	    {
	        cout<<"No"<<"\n";
	    }
	    else if((a[5]*sum)/5 < 24)
	    {
	        cout<<"No"<<"\n";
	    }
	    else
	    {
	        cout<<"Yes"<<"\n";
	    }
	    
	    
	}
	return 0;
}

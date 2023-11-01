 // ahiya to loic to sachu hatu pan thodu lakhvama takleef thai chi  "aa puch ok" 
///   Simple Statistics
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int i,t,n,k;
//     cin>>t;
    
//     for(i=0;i<t;i++)
//     {
//         cin>>n>>k;
//          vector<int> a(n);
//         sort(a.begin(),a.end());
//         a.erase(a.begin()+k,a.end()-k);
//         int d = accumulate(a.begin(),a.end(),k);
//         float f = d/n-(2*k);
//         cout<<f<<"\n";
//             }
    
// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,t,n,k;
    cin>>t;
    
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        int arr[n];
        double sum =0; // double na lidhe
        double avg =0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=k;i<n-k;i++)
        {
            sum = sum +arr[i];
        }
        avg = (sum) / (n-(2*k)); // kadach bracket na lidhe
        cout<<fixed<<setprecision(6)<<avg <<"\n"; // set precision exact no of zeroes aape che
        
    }
    
	return 0;
}

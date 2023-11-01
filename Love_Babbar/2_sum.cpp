#include <bits/stdc++.h>
using namespace std;
#define int long long int
int main()
{
    int n;
    cin>>n;
   
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int target;
    cin>>target;
    sort(arr,arr+n);
    int i = 0;
    int j = n-1;
    int f = 0;
    while(i<j)
    {
        if(arr[i]+arr[j]==target)
        {
            f=1; 
        }
        else if(arr[i]+arr[j]<target)
        {
            i++;
        }
        else if(arr[i]+arr[j]>target)
        {
            j++;
        }
    }
    if(f==1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
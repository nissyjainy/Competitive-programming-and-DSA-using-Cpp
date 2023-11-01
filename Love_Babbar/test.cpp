#include <bits/stdc++.h> 
int Max(int arr[], int b)
{
	int max = INT_MIN;
    for(int i=0;i<b;i++)
    {
            if(max<arr[i])
            {
                max == arr[i];
            }
    }
    return max;
}
int Min(int arr[], int b)
{
    int min = INT_MAX;
    for(int i=0;i<b;i++)
    {
            if(min>arr[i])
            {
                min == arr[i];
            }
    }
    return min;
}
  int main()
{
    int i,n;
    int arr[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    int ans = Min(arr,n);
    int answer = Max(arr,n);
    cout<<ans+answer<<"\n";
}
#include <iostream>
using namespace std;

int main() {
  int i,t,n,a[30],b[30];
  cin>>t;
  int count = 0;
  for(i=0;i<t;i++)
  {   
      
      cin>>n>>a[n]>>b[n];
       for(int j=0;j<n-1;j++)
       {
           if(a[j]!=0 && b[j]!=0)
           {
               count++;
           }
           
           else{
               
               count=0;
           }
           
           
       }
      cout<<count<<"\n";
  }
	return 0;
}

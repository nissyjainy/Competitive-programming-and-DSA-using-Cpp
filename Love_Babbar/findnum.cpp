#include<bits/stdc++.h>
using namespace std;
void solve(int *arr,int n){
    int i=0;
    int a[2];
    while(i<n){
        if(arr[i]!=arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);
        }
         else
           {
               i++;
           }
    }
    int j=0;
    for(int k=0;k<n;k++){
        if(arr[k]!=(k+1)){
            a[j++]=arr[k];
            
            a[j]=k+1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<< " ";
    }

}
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr,n);
    }
    return 0;
}
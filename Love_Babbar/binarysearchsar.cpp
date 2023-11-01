#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
int binarysearch(vector<int> &v,int start,int end,int key){
    while(end>start){
        int mid= (start+end)/2;
        if(key>mid){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    if(start==v.size()){
        return -1;
    }
    
    return (end-1);
}
int32_t main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        int key;
        cin>>key;
        cout<<binarysearch(v,0,n-1,key)<<endl;

    }
    return 0;
}

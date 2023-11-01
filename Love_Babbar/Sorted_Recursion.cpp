#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool sorted(int * arr, int size)
{
    // base case 
    if(size==0 || size==1)
    {
        return true; // jyare single walu che to already sorted che ae ok 
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        bool remaining = sorted(arr+1,size-1); // ahiya remaining part ne check kar shu che aevu ok 
        return remaining;
    }
}
int main()
{
    int arr[5] = {2,34,21,4,8};
    int size = 5;
    bool ans =  sorted(arr,size);
    if (ans) // ans == true lakhavani jarur nathi ahiya ok 
    {
        cout<<"The array is sorted"<<"\n";
    }
    else
    {
        cout<<"The array is not sorted "<<"\n";
    }
    return 0;
    
}
#include <iostream>
using namespace std;
int sorted(int arr[],int n)
{
    if(n==0||n==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        int sort=sorted(arr+1,n-1);
         return sort;
    }
   
}
int main()
{
    int arr[5]={1,2,3,421,51};
    int size = 5;
    int ans = sorted(arr,size);
    if(ans)
    {
        cout<<"The array is sorted"<<"\n";
    }

    else
    {
        cout<<"The array is not sorted"<<"\n";
    }
}
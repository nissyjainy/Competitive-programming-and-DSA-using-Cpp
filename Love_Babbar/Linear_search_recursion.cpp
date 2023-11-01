#include <iostream>
using namespace std;
int linear_search(int arr[],int n,int key)
{
    if(n==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    int ans=linear_search(arr+1,n-1,key);
    return ans;
}
int main()
{
    int arr[5]={1,5,4,65,34};
    int size =5;
    int key = 445;
    int pre = linear_search(arr,size,key);
    if(pre==true)
    {
        cout<<"The element is present"<<"\n";
    }
    else{
        cout<<"The element is not present"<<"\n";
    }
    

}
#include <iostream>
using namespace std;
int sum(int arr[],int n)
{
    if(n == 1)
    {
        return arr[0];
    }
    if (n==0)
    {
        return 0;
    }
    int a = sum(arr+1,n-1);
    int sum = arr[0] + a;
    return sum;
}
int main()
{
    int arr[5]={3,2,5,1,6};
    int size = 5;
    cout<<"The sum of the given array is "<< sum(arr,size)<<"\n";
}
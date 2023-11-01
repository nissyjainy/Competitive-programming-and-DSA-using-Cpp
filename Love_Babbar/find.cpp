#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={1,3,10,11,9,110};
    int n = sizeof(arr)/sizeof(int);
    int key = 11;//This elemwnt is to be found
    cin>>key;
    auto it = find(arr,arr+n,key);//Gives the address of the number found
    int index = it - arr;
    if(index == n)
    {
        cout<<key<<"Not found";
    }
    else{
        cout<<"Present at index"<<index;
    }
    cout<<index;


}

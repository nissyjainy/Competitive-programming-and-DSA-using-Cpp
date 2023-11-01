#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;
    cout<<num<<"\n";
    cout<<"The address of the num is"<<&num<<"\n";
    cout<<*ptr<<"\n";
    cout<<ptr<<"\n";
}
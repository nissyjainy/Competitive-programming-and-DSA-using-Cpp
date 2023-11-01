#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n==0)
    {
        return 1;

    }
    int smaller = factorial(n-1);
    int larger = n*factorial(n-1);
    return larger;
}
int main()
{
    int n;
    cin>>n;
    
    cout<<"The factorial of the given number is "<< factorial(n)<<"\n";
    }
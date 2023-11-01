#include <iostream>
using namespace std;


//int n;
//cin>>n;


//cout<<n;


//if(age>=21)
//{
   // body
//}
//else if(condition)
//{
    //body
//}

//else(condition)
//{
    //body
//}
int main()
{
 int a, b , c;
 //take the input of the first number
 cout<<("Enter the number 1 ") ;
 cin>>a;
 //take the input of the second number
 cout<<("Enter the number 2 ") ;
 cin>>b;
 cout<<("Enter the number 3 ") ;
 cin>>c;
 if(a>b>c || a>c>b)
 {
    cout<<("The largest is")<<a;
    if(b>c)
    {
       cout<<("The middle is")<<b;
    }
    else{
        cout<<("The smallest is")<<c;
    }
 }
 
 else if(c>b>a || c>a>b)
 {
    cout<<("The largest is")<<c;
    if(b>a)
    {
       cout<<("The middle is")<<b;
    }
    else{
        cout<<("The smallest is")<<a;
    }
 }
 
 else
 {
    cout<<("The largest is")<<b;
    if(a>c)
    {
       cout<<("The middle is")<<a;
    }
    else{
        cout<<("The smallest is")<<c;
    }
 }

 return 0;
}
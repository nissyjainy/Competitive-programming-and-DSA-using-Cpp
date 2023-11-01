#include <iostream>
using namespace std;
bool palindrome(string name,int i,int j)
{
    if(i>j)
    {
        return true;//Here all the test cases are equal therefore aapde true nakhi daiye che.
    }
    if(name[i]!=name[j])
    {
        return false;
    }
    palindrome(name,i+1,j-1);

}
int main()
{
    string name="abccb";
    int ans = palindrome(name,0,name.length()-1);
    if(ans)
    {
        cout<<"The given string is the palindrome"<<"\n";
    }
    else
    {
        cout<<"The given string is not the palindrome"<<"\n";
    }
    
}
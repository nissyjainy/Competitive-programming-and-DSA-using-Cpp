#include <iostream>
using namespace std;
void reverse(string &str , int i,int j)
{
    if(i>j)
    {
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}
int main()
{
    string s = "babbar";
    reverse(s, 0, s.length()-1);
    cout<<"The reversed string is  "<< s <<"\n";
}
#include <iostream>
using namespace std;
int count=0;
int length(char ch[])
    
{
   for(int i=0;ch[i]!='\0';i++)
    {
        
        count++;
    }
    return count;
}
char Reverse(char ch[],int n)
{
    int s = 0;
    int e = n - 1;
    while(s<=e)
    {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
  

}
int main()
{
    char ch[20];
    int n;
    cout<<"Enter the string that you neeed to be reversed"<<"\n";
    cin>>ch;
    cout<<"The string you entered is "<<ch<<"\n";
    int len = length(ch);
    cout<<"Length"<<len<<"\n";
    Reverse(ch,len);
    cout<<"The string which is reversed  is "<<ch<<"\n";



}
/*#include <bits/stdc++.h> 
 char lower_case(char ch)
    {
       if(ch>='a' && ch<='z')
       {
           return ch;
           
       }
        else
        {
            return ch-'A'+'a';
        }
    }
    return ch;
    
bool checkPalindrome(string s)
{
    int st = 0;
    int e = s.size()-1;
    while(st<=e)
    {
       if(lower_case(ch[st])==lower_case(ch[e]))
       {
           return 1;
       }
       else
        {
        st++;
        e--;
        }
    }
    return 0;
   
}
*/


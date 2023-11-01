#include <iostream>
using namespace std;
int count;
int length(char ch[])
    
{
   for(int i=0;ch[i]!='\0';i++)
    {
        
        count++;
    }
    return count;
}
int main()
{
    char ch[10];
    cout<<"Enter the name"<<"\n";
    cin>>ch;
    cout<<"The name that you have entered is "<<ch<<"\n";
    cout<<"The length of the word is "<<length(ch)<<"\n";


}
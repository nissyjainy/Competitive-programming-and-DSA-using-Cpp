#include <bits/stdc++.h>
using namespace std;
int main()
{
    // push kar ok 
    stack<int> s;
    int mini = INT_MAX;
    void push(int data) // aa given che kai mare array etc nathi levanu ok 
    {
        if(s.empty())
        {
            s.push(data);
            mini = data;
        }
        else
        {
         if(data > mini)
         {
            s.push(data);

         }
         else
         {
            int val = 2*data - mini;
            s.push(val);
            mini = data;

         }
        }
    }
    void pop()
    {
        if(s.empty())
        {
            return -1;
        }
        int curr = s.top();
        s.pop();
        if(curr<mini)
        {
            // minimum update thay che ok 
            int premini = mini;
            int val = 2*mini - curr;
            mini = val ;
            return premini;
        }
        else
        {
           return curr; // aa samjh na padi mane kem return karyu che
           // ahiya ke che ki normal pop karvanu che to mare return curr karva thi pop thai jashe?
           
        }
    }
    bool isempty()
    {
        if(s.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // ahiya s.emoty return kar ok 
    void getmin()
    {
       // stack empty wali condition jo ok 
       // pachi mini return kar or s.top bhi chale ok 
    }
    
}
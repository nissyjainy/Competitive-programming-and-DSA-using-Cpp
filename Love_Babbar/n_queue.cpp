#include <bits/stdc++.h>
using namespace std;
class kqueue()
{
public:
int *front;
int *rear;
int *next;
int freespot;
int * arr;
int n;
int k;
kqueue(int n,int k)
{
    this-> n = n;
    this-> k = k;
     arr = new int[n];
     front = new int[k];
     rear = new int[k];
    for(int i=0;i<k;i++)
    {
        front[i]==-1;
        rear[i]==-1;

    }
    next  = new int[n];
    for(int i=0;i<n;i++)
    {
        next[i] = i+1;
    }
    next[n-1]  = -1;
    freespot = 0;
   
}
}

int main()
{
   //approach 1 jo ek array ne tu k queue ma convert kar ok but aama tara space utilization nathi ok
   // approach 2 ma jo push pop banne che ok 
   // push operation
   //condition for the overflow condition 
   if(freespot==-1)
   {
    cout<<"The array is full you cannot enter the data"<<"\n";
    return;
   }
   else
   {
    // jo tare full nathi to push kar ok 
    // index find kar sema add karvu che ok 
   int index = freespot;
    //freespot ne update kar ok 
    freespot = next[index];
    //have aapdi pade position aayi gayi che to 
    //next jo ki tare first element add kare che ki nathi karto tu ok 
    if(front[qn-1]==-1)
    {
        front[qn-1] = index;
    }
    else
    {
        next[rear[qn-1]] = index;
        
    }
        next[index]= -1;
        rear[qn-1] = index;
        arr[index] = data;
   }

 // POP Mate ok
 // firstly check whether the array is empty or not 
 if(front==-1)
 {
    cout<<"The array is empty and you cannot pop the elements from this"<<"\n";
    return ;
 }   
 // Now find the index to pop 
 index = front[qn-1];
 // front ne aagad vadhar ok 
 front[qn-1] = next [index];
 // now te je pop karyu che ae tare freespot bani gayo che ok to ae hi tare freespot ma nakh ok 
   next[index] = freespot;
   // aa tare link mate ok jo ane 
   freespot = index ;
   return arr[index];  
}
#include <iostream>
using namespace std;
class Stack {
    public:
        int * arr;
        int top ;
        int size;
    // constructor 
    Stack(int size)
    {
         this -> size =  size;
         arr= new int[size];
         top = -1;

    }
    void push( int element) // jyare element nakh va ni jgya hoy tyare j push thay
    {
        if(size-top>1) // 0 ma nathi aavtu 1 ma atleast 1 size baaki che
        {
            top ++;
            arr[top]= element;
        }
        else
        {
            cout<<"The stack is full no more elemnt can be inserted"<<"\n";
        }

    }
    void pop(int element)
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"The stack is empty"<<"\n";
        }

    }
    int peek()
    {
        if(top >= 0 && top<size) // for valid stack;
 
        return arr[top];
        else
        {
            return -1;
        }
    }
    bool Empty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
          return false;
        }
    }


};
int main()
{
   Stack s(5);
   s.push(45);
   s.push(90);
   s.push(78);
   s.push(754);
   s.push(900);
   s.push(789);
   cout<<s.peek()<<"\n";
  
 


}
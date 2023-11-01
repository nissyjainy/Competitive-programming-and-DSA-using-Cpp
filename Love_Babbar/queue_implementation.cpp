#include <bits/stdc++.h>
using namespace std;
class
{
    private:
    // constructor 
    int size;
    int *arr;
    int qfront;
    int rear;
    // constructor banavta jo ok 
    public:
    size = 10000001;
    arr= new int[size]; // node wala ma new node(element hoy ke kai biju hoy )
    // int arr[1000001];
    qfront =0;
    rear =0;
    // push function lakh ok 
    void push(int data)
    {
        if(rear = n) // fn to size walu che ok 
        {
           return -1;
        }
        else
        {
        arr[rear] = element;
        rear++;
        }
    }
    void pop()
    {
        if(rear == qfront)// initially badha same j position par che ok
        {
            return -1;
        }
        else
        {
            arr[front]=-1; // pop mate lagbhag empty location che aa value  ok
            front++; 

        }
    }
    bool isempty()
    {
        if(rear == qfront) // initially jo ok ki same che to tare empty j che ok 
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int front()
    {
        if(rear == qfront)// empty che ok 
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }

}

// CIRCULAR QUEUE
// initially tare front ane rear = 0;
// constructor ma lakhi de tu ok 
void push(int data)
{
    //1. full ni condition
    if((front ==0 && rear == size - 1) || rear = (front-1) %(size-1) )
    {
        // return -1; // full che aa ok
        return false;
    }
    else if(front  == -1 == rear ) // first element push akrvanu che banne bhi same j positon par che to aa conditon par lakhish to pan chale
    {
        front = rear =0;
        arr[rear] = data;
    }
    else if(front!=0 && rear == size -1)
    {
        rear =0;
        arr[rear] = data;
    }
    else
    {
        arr[rear] = data;
        rear++;
    }
    return true;
}
// empty to nathi aa check kar
// ek elemnt che to aene pop kar 
// aagad laine aay ok
// normal case
bool pop()
{
    if(front ==-1)
    {
        cout<<"Queue is empty " <<endl;
        return -1;
    }
    // store pan karvanu che 
    int ans = arr[front];
    arr[front] = -1; // khali jagya par ponit kare che ok
    else if(front == rear)
    {
        rear = front = -1;

    }
    else if(front == size -1)
    {
        front = 0;
        // arr[front] = -1;
    }
    else
    {
        //  arr[front] = -1;
         front++;
    }
    return ans;
}

// DOUBLY ENDED QUEUE


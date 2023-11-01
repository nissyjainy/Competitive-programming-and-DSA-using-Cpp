#include <iostream>
using namespace std;
class node
{
        public:
        int data;
        node *next;
        // constructor
         node(int data)
        {
                  this ->data = data;
                  this ->next = NULL;
        }
};
void InsertAtHead(node * &head , int d)
{
    //new node creation 
    node * temp = new node(d);
    temp->next = head;
    head = temp;
}
void InsertAtTail(node * &tail , int d)
{
    //new node creation 
    node * temp = new node(d);
    temp->next = NULL;
    tail->next = temp;
    
}
void InsertAtIndex(node * &tail , int d,node * &head ,int index)
{
    if(index==0)
    {
        InsertAtHead(head , d);
        return;
    }

    
     node *temp = head;
     int count = 0;
     while(count<index-1)
     {
        temp = temp ->next;
        count++;
     }
      node * NodeTostart = new node(d);
      NodeTostart->next = temp ->next;
      temp ->next = NodeTostart;
    if(temp->next == NULL)
    {
         InsertAtTail(tail, d);
        return;
    }

}
void Print(node * head)
{
    node *temp = head; ///// aa samaj ok temp nam nu ahiya pointer banayu che

    while(temp !=   NULL)
    {
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;

}

int main()
{
    node * node1 = new node(54);
   // cout<< node1->data<<"\n";
   // cout<< node1->next<<"\n";

    node * head = node1;
    node * tail = node1;
    Print(head);
    //InsertAtHead(head,20);
   // Print(head);
   // InsertAtTail(head,90);
    Print(head);
    InsertAtTail(head,900);
   InsertAtHead(head,20);
    Print(head);
    InsertAtIndex(tail,254,head,0);
    Print(head);

    return 0;
}
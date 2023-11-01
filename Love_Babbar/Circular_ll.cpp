#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data" << value << endl;
    }
};
void Insertattail(Node *&tail, int element, int d)
{
    //     Node * Nodetoinsert = new Node(d);
    //     Node * temp = head;
    //     while(temp->next !=NULL)
    //     {
    //         temp = temp -> next;
    //     }
    //     temp -> next = Nodetoinsert;
    //     Nodetoinsert->next = head;
    //     head = Nodetoinsert;
    // jyare list empty hoy tyare ok
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        temp->next = temp; // ahiya circular mate
    }
    else
    {
        // not empty
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(d); /// here new node is created
        temp->next = curr->next;
        curr->next = temp;
    }
}
void Delete(Node * &tail,int value)
{
    // empty list
    if(tail == NULL)
    {
        cout<<"The list is empty"<<endl;
        return;
    }
    else
    {
        Node * prev = tail;
        Node * curr =  prev -> next;
        while(curr->data!=value)
        {// aaama baine ne aagad vadharva nu che
            prev = curr;
            curr = curr-> next;

        }
        Node * temp = new Node (value);
        prev -> next = curr-> next;
        if(prev == curr)
        {
            tail == NULL;
        }
        else if(tail == curr) // or tail == prev 
        {
            tail == prev ; // tail == curr
        }
        if(tail == curr)
        {
            prev = curr; // in order to save tail
        }
        curr -> next = NULL; 
    }
}
void print(Node *tail)
{
    Node *temp = tail;
    cout << temp->data << " ";
    while (temp->next != tail) // ahiya fari tya j sudhi aavu chu hu ok
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{

    Node *tail = NULL;
    Insertattail(tail, 5, 3); // element , data
    print(tail);
    Insertattail(tail, 3, 5);
    print(tail);
    Insertattail(tail, 5, 7);
    print(tail);
    Insertattail(tail, 7, 9);
    print(tail);
    Delete(tail,7 );
    print(tail);
    return 0;
}
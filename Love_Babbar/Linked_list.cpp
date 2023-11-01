#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
   // destructor
    ~Node()
   

        int value = this->data;
        // aama jo ki ek node ne delete karvani che mare to firstly mare check karvanu ki
        // this->next NULL che ki nahi and if not then aene delete kar ane this -> next ne NULL karo k
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data" << value << endl;
    
};
void Insertathead(Node *&head, int d)
{
    // create a new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertatTail(Node *&tail, int d)
{
    // create a new node
    Node *temp = new Node(d);
    temp->next = NULL;
    tail->next = temp;
    tail = tail->next;
}
void InsertatMiddle(Node *&tail, Node *&head, int position, int d)
{
    Node *temp = head;
    int count = 1;
    // inserion at the start
    if (position == 1)

    {
        Insertathead(head, d);
        return;
    }
    // insertion at the end
    if (temp->next == NULL)
    {
        InsertatTail(tail, d);
        return;
    }

    // aa while loop ma jo ki tare initially head thi start thay che you need to traverse till postion -1

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // create a new node
    Node *newToinsert = new Node(d);
    newToinsert->next = temp->next;
    temp->next = newToinsert;
}
void Deletion(Node * &head, int position)
{

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free karu chu
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 0;
        while (count < position -1)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next; // ek vastu kau tane ok je mari pase che ae right ma aavshe ok
        curr->next = NULL;
        delete curr;
    }
   
}
void print(Node *head)
{
    // initially head par point che pachi temp ne aagad vadharta jaiye che
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // node 1 is created
    Node *node1 = new Node(10000);
    // cout << node1->data << "\n";
    // cout << node1->next << "\n";
    Node *head = node1;
    Node *tail = node1;
    // head node1 par point kari didhu che
    print(head);
    Insertathead(head, 12);
    print(head);
    Insertathead(head, 15);
    print(head);
    InsertatTail(tail, 25);
    print(head);
    InsertatMiddle(tail, head, 5, 250);
    print(head);
    Deletion(head,5 );
    print(head);
    return 0;
}
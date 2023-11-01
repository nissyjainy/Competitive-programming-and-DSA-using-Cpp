#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void print(Node *head) // aama traverse aj thay che to length bhi find out thai jashe ok
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void InsertatHead(Node *&head, int d)
{
    // step 1
    //  create new node
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void InsertatTail(Node *&head, Node *&tail, int d)
{ // what if the Linked list is NULL
    if (tail == NULL)
    {
        Node *temp = new Node(d); // silmilarly do for the insert at head
        tail = temp;
        head = temp;
    }
    else
    {
        // step 1
        //  create new node
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void Insertatposition(Node *&tail, Node *&head, int position, int d)
{
    Node *temp = head;
    int count = 1; // for one node
    // starting position
    if (position == 1)
    {
        InsertatHead(head, d);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // insert at the end
    if (temp->next == NULL)
    {
        InsertatTail(tail, d);
        return;
    }
    Node *Nodetoinsert = new Node(d);
    Nodetoinsert->next = temp->next;
    temp->next->prev = Nodetoinsert;
    temp->next = Nodetoinsert;
    Nodetoinsert->prev = temp;
}
void Deletion(Node *&head, int position)
{

    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 0;
        while (count < position - 1)
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

int main()
{ // aamatari shu bhul thayi jo node1 create kare che tu ok to node 1 par tu head aap tu
    Node *node1 = new Node(100);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    InsertatHead(head, 11);
    print(head);
    InsertatTail(tail, 110);
    print(head);
    Insertatposition(tail, head, 4, 123);
    print(head);
    return 0;
}
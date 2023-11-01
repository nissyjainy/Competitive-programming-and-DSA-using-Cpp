#include <bits/stdc++.h>
using namespace std;
#define int long long int
// approach 1 che ok here data is being replaced
Node *count(Node *head)
{
    Node *temp = head;
    int zero = 0;
    int one = 0;
    int two = 0;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zero++;
            temp = temp->next;
        }
        else if (temp->data == 1)
        {
            one++;
            temp = temp->next;
        }
        else if (temp->data == 2)
        {
            two++;
            temp = temp->next;
        }
    }
}
temp = head;
while (temp != NULL) // aakhi Linked list traverse kare che n tu
    if (temp->data != 0)
    {
        temp->data = 0;
        zero--;
    }
    else if (temp->data != 1)
    {
        temp->data = 1;
        one--;
    }
    else if (temp->data != 2)
    {
        temp->data = 2;
        two--;
    }
return head;
// approach 2 ok jema data replace nathi karta aapde aama to jo 0 , 1 , 2 na hoyto repalce j kare de ok
// Links ne change kar ok ane ans lay
// 3 node banai lidhi che mei ok
void insertattail(Node * &tail, Node * temp)
{
    Node *curr = head;
    if (head == NULL)
    {
        head = curr;
        tail = curr;
    }
    tail->next = curr;
    tail = curr;
}
// initially mei zerohead ane zerotail ne same pointer par j rakhya che ok
Node *sort(Node *head)
{
    Node *zerohead = new node(-1);
    Node *zerotail = zerohead;
    Node *onehead = new node(-1);
    Node *onetail = onehead;
    Node *twohead = new node(-1);
    Node *twotail = twohead;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            insertattail(zerotail, temp); // insertattail mare temp thi karvanu che atle
        }
        else if (temp->data == 1)
        {
            insertattail(onetail, temp);
        }
        if (temp->data == 2)
        {
            insertattail(twotail, temp);
        }
        temp = temp->next;
    }
    if (onehead->next != NULL)
    {
        zerotail->next = onehead->next;
    }
    else
    {
        zerotail->next = twohead->next;
    }
    onetail->next = twohead->next;
    twotail->next = NULL;

    head = zerohead->next;
    delete (zerohead);
    delete (onehead);
    delete (twohead);
    return head;
}
//Time complexity O(n)  and space complextity o(1)
 
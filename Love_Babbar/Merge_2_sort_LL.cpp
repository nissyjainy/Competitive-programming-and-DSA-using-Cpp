/*#include <bits/stdc++.h>
using namespace std;
#define int long long int
// Node <int> * first and Node <int> * second che 2 Linked List
   // normal mare 2 linked list ne merge karvani che
   //  2 linked list che ok aene merge karvani che mare ok
   // I have already taken 2 linked list ok ans ane temp naam ni ok
   Node * prev = head 1;
   Node * curr = head 1 -> next;
   Node * ans = head 2;
   if(first ==NULL) // or mara case ma ans ane prev aavat ok
   {
    return second;
   }
   else if(second ==NULL)
   {
    return first;
   }
   te khali ak j case lidhu che bija case bhi che ok
   while(prev!=NULL || ans !=NULL)
   {
       if((ans->data > prev-> data) && (ans-> data < curr-> data))
       {
            prev -> next = ans;
            ans -> next = curr;
       }
       curr = curr-> next;
       prev = prev -> next;

   }
*/
Node<int> *solve(Node<int> *first, Node<int> *second)
{
    Node<int> *curr1 = first;
    Node<int> *next1 = curr1->next;
    Node<int> *curr2 = second;
    Node<int> *next2 = curr2->next;
    // only one node is present in curr1
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }
    while (curr1 != NULL && next 1 != NULL && curr2 != NULL)
    {
        if ((curr1->data <= curr2->data) && (curr2->data <= next1->data))
        {
            curr1->next = curr2;
            next2 = curr2->next; // HERE THE STEPS ARE IMPORATNT OK IF THE SECOND STEP IS DONE FIRST THEN WE WILL LOSE THE TRACK 
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = curr1->next;
            next1 = next1->next;
            if (next1 == NULL)
            {
                curr1->next = curr2; // first linked list ne as it is second sathe link kari de ok
                return first;
            }
        }
    }
    return first;
}
Node<int> *sort(Node<int> *first, Node<int> *second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }
    if (first->data <= second->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}


#include <bits/stdc++.h>
using namespace std;
#define int long long int
Node * unsorted(Node * head)
{
    if(head == NULL)
    {
        return NULL; 
    }
    Node * curr = head;
    
    while(curr!=NULL)
    {
        Node * temp = curr->next;
        while(temp!=NULL)
        {
            if(curr->data == temp-> data)
            {
                curr-> next = temp -> next;
                delete(temp);
            }
            else
            {
                temp = temp-> next;
                curr = curr -> next;
                
            }
        }
    }

}


// Sort karine solution lay ok and then use the sorted one solution
// Map use karine kar ok TC O(n) thai jay SC O(n) tahi jay
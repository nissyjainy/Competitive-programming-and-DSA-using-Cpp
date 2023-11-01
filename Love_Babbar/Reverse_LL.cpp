#include <bits/stdc++.h>
using namespace std;
#define int long long int
Node *Reverse(Node *head)
{
    if (head == NULL || head->next == NULL) // no node and 1 node
    {
        return head;
    }
    Node *curr = head;
    Node *prev = NULL;
    Node *forward = NULL;
    while (curr != NULL) // aama badha j links ne reverse kare che tu ok
    {
        forward = curr->next; // here if we change the order nahi chale ok
        curr->next = prev;
        prev = curr;
        curr = forward; /// jo bhai aama while loop ma aagad bhi to vadhva nu che ok atle prev = curr and curr = forward
    }
    return prev;
}

// THIS IS THE ITERATIVE METHOD
// NOW THE RECURSIVE SOLUTION
void solve(Node *&head, Node *curr, Node *prev)
{
    Node *forward = NULL;
    // base case
    if (curr = NULL)
    {
        head = prev;
        return;
    }
    forward = curr->next;
    solve(head, forward, curr);
    curr->next = prev;
}
/*
int main()
{
    Node * curr = head;
    Node * prev = NULL;
    solve(head,curr,prev);
    return head;

}
*/


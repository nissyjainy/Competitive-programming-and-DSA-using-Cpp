// Swapping mate 2 methods che we need to swap the data or swap the nodes swapping the data is very easy but nodes swap karvama halat kharab thai jay che ok
#include <bits/stdc++.h>
using namespace std;

ListNode *swapNodes(ListNode *head, int k)
{
    // approach 1
    vector<int> v;
    ListNode *temp = head;
    while (temp != NULL)
    {
        v.push_back(temp); // LL na elements ne mei vector ma push kari didha che ok
    }
    // vector ma nakhi didhu che khali mare swap j karvanu che
    swap(v[1], v[k]);
    // mare vector aayi gayu che have mare vector thi linked list ma fari convert karvanu che
    // vector thi list ma kai rite karvanu ?
    ListNode *list = new node();
    // aama aagad jo shu karvanu ok
}

// approach 2 (by swapping the data) // this the code to swap the head and the k element
{
    ListNode *temp = head;
    while (k != 0)
    {
        temp = temp->next;
        k--;
    }
    swap(head->val, temp->val);
    return head;
}
// Aprroach 3 --> Aama jo we need to swap the k element from the beginning and the k element from the end ok
List Node *temp = head;
List Node *ans = head;
while (k != 0)
{
    temp = temp->next;
    k--;
}
// temp has the k element from the start
// Linked list ni size mate
int count = 0;
while (temp != NULL)
{
    temp = temp->next;
    count++;
}
// count gives the size of the linked list
int q = count - k + 1;
while (q != 0)
{
    ans = ans->next;
    q--;
}
swap(temp->val, ans->val);
return head;

// APPROACH 4
ListNode *fast = head;
ListNode *slow = head;
while (k != 0) // ahiya mare --k kem use thay che instead of this je mei use karyu che 1 based indexing che atla mate aa use karyu che ok 
{
    fast = fast->next;
    k--;
}
ListNode *ans = fast; // ahiya store kare che ok
while (fast->next != NULL)
{
    slow = slow->next;
    fast = fast->next;
}
swap(slow->val, fast->val);
return head;


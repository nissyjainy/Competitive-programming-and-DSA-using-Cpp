#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool Checkpalindrome(vector<int> arr)
{
    int n = arr.size();
    int s = 0;
    int e = n-1;
    while(s<=e)
    {
        if(arr[s]!=arr[e])
        {
            return false;
        }
     s++;
     e--;
    }
    return true;
}
bool Palindrome(Node * head)
// vector initialize kar anre LL ne vector ma nakh ok  
    vector<int> arr;
    Node * temp = head;
    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp = temp -> next;
    }
    return Checkpalindrome(arr); 
    // Time complexity o(n) space comp o(n);


    /// Second approach 
    /*
    jo hu shu kau chu initially find the middle node of the linked list 
    step 2 shu che reverse the linked list (second part )
    step 3 compare kar 
    */
   Node * mid(Node * head)
   {
    Node * slow = head;
    Node * fast = head -> next;
    Node * forward = NULL;
    while(fast!=NULL)
    {
        fast = fast -> next;
        if(fast-> next !=NULL)
        {
            fast = fast -> next;
        }
        slow = slow-> next;

    }
    return slow;
   }
   void reverse(Node * head)
   {
        if(head == NULL || head -> next == NULL)
        {
              return head;
        }
        Node * prev = NULL;
        Node * curr = head;
        Node * forward = NULL;
        while(curr!=NULL)
        {
            forward = curr-> next;
            curr-> next = NULL;
            prev = curr;
            curr= forward; 
        }
        return prev;
     }
   Node * middle = mid(head); // slow pointer ne middle ma nakhyu 
   Node * temp = middle-> next;
   // Have reverse kar ok from middle to end sudhi pachi check kar ki same che ki nahi 
    middle-> next = reverse(temp); // mare reverse karvanu che to kya thi karvanu che temp thi or middle -> next thi

   // compare kar banne ne ok 
   Node * head 1 = head;
   Node * head 2 = middle -> next;
   while(head 2 !=NULL)
   {
        if(head 1 -> data != head 2 -> data)
        {
            return false;
        }
         head 1 = head 1 -> next;
         head 2 = head 2-> next;
   }
   return true;
   /// now repeat the second step ok original list ne manipulate na kar ok 
   temp = middle -> next;
   middle -> next = reverse(temp);

#include <bits/stdc++.h>
using namespace std;
#define int long long int
int getlength(Node * head)
{
    Node * temp = head;
    int length = 0;
    while(temp !=NULL)
    {
        length++;
          temp = temp-> next;
          
    }
    return length; // length atle find kari kem ke aapde ae length par jaine node find karishu
}
int main()
{
    int len = getlength(head);
    int ans = (len)/2;
    // here we need to return the node ok 
    Node * tree = head;
    int count = 0;
    while(count<ans)
    {
        tree = tree -> next;
        count++;
    }
    return tree; // ahiya node return kariye che
}
// approach 2
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
     // slow and the fast pointer thi thashe aa ok 
     // slow pointer gives the middle of the linked list
     ListNode * slow = head;
     ListNode * fast = head->next;
    while(fast!=NULL)
    {
        fast = fast-> next;
       if(fast!=NULL)
       {
        fast = fast -> next;
       }
        slow = slow -> next;
    }
    
    return slow;  
    }
}
// check for the condition ki for empty list single list ma retrn head
// for the list with 2 nodes return head -> next
/*#include <iostream>  Algo che aa 1st step find the mid then reverse the linked list after the mid .compare kar linked list ne before mid and after mid jo ae same aave to palindrome che then reverse the second part so that we can get the original LL.
using namespace std;
   Node *Mid(Node * head)
{
    Node * slow = head;
    Node * fast = head ->next;
    while(fast!= NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node * Reversed(Node * head)
{
    Node * curr= head;
    Node * pre = NULL;
    Node * forward = head ->next;
    while(curr!=NULL)
    {
        forward = head->next;
        curr -> next =pre;
        pre= curr;
        curr= forward;
    }
    return pre;
}
int main()
{
    Node * middle = mid(head);
    Node * temp = middle -> next;
    middle -> next = Reversed(temp);
    Node * head1 = head;
    Node * head2 = middle->next;
    while(head2!=NULL)
    {
        if(head1->data == head2 ->data)
        {
            return true;
        }
        head1 = head1->next;
        head2 = head2->next;

    }
    return false;
}*/
// Codechef nu problem che
#include <iostream>
using namespace std;

int main() {
    int i,t,x;
    cin>>t;
    for(i=0;i<t;i++)
    { 
        int y;
        cin>>x;
        
       if(x/10==0)
         {
             y=x;
         }
        while (x/10!=0)
        {
        
            y = x % 10;
            x = x/10;
        }
        
        if( y == 7)
        {
            cout<<"yes"<<"\n";
        
        }
        else
        {
            cout<<"no"<<"\n";
        }
        
    }
	return 0;
}
///////


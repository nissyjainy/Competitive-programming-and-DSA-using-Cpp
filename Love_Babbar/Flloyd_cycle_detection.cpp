#include <iostream>
using namespace std;
/* int main()   // This is the whole algorithm of the Flloyd cycle detection .
{
    Node * node1 = new node(10);
}
Node *Flloyd(Node * head)
{
         if(head == NULL)
         {
            return NULL;
         }
         Node * slow = head;
         Node * fast = head;
         fast = fast ->next;
         while(fast!=NULL)
         {
            fast = fast->next;
         }
         slow = slow->next;

         if(fast == slow)
         {
            return slow;
         }
         return NULL;
}
// IF FAST IS NULL TO NO LOOP OK
 Begginning of the loop
Node * Begginning(Node * head)
{
    if(head == NULL)
    {
        return NULL;

    }
    Node * call = Flloyd(head);
    Node * slow = head;
    while(call!=slow)
    {
        slow = slow->next;
        call = call->next;
    }
    return slow;

}
Remove mate starting node na ek node pehla na node par null point karvu che to node remove thai jashe
*/

 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
private: // ahiya function jevu che aa
// Insert at tail kem karyu ae samjahtu nathi mane 
Node * insertattail(Node * &head,Node * &tail,int val)
{
    Node * temp = new Node(val); // ahiya new node to create kar je insert karvani che
    if(head==NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail -> next = temp;
        tail = temp; // je temp ni value che ae mare tail ma nakhvani che ok 
    }
}
struct Node * add(Node * first,Node * second)
{
    int carry =0;
    // sauthi pehla add kar ok ane aene ek linked list ma nakh ane pachi carry kadh ok ane bija ma add akr aene ok 
    Node * addhead = NULL;
    Node * addtail = NULL;
    // aa bane aapde linked list ma add karva mate che ok

// approach 2 che aa ok 
    while(first!=NULL || second !=NULL || carry!=0)
    {
        int firstsum = 0;
        if(first!=NULL)
        {
            firstsum = first-> data;
        }
        int secondsum = 0;
        if(second!=NULL)
        {
            secondsum = second-> data;
        }
        int sum  = carry + secondsum + firstsum;
        int digit = sum%10;
        insertattail(head,tail,digit);// ahiya linked list ma add karu chu hu ok but kem insertattail karyu ae nathi khabar mane 
        // mane lage che ki insertathead thavu joiye n
         carry = sum/10; 
         if(first!=NULL)
         {
        first = first -> next;
         }
         if(second!=NULL)
         {
        second = second -> next;
         }

    }
    while(first!=NULL && second !=NULL)
    {
        int sum  = carry + first-> data + second-> data;
        int digit = sum%10;
        insertattail(head,tail,digit);// ahiya linked list ma add karu chu hu ok but kem insertattail karyu ae nathi khabar mane 
        // mane lage che ki insertathead thavu joiye n
         carry = sum/10; 
        first = first -> next;
        second = second -> next;

    }
    
    
     while(first!=NULL )
    {
        int sum  = carry + first-> data ;
        int digit = sum%10;
        insertattail(head,tail,digit);// ahiya linked list ma add karu chu hu ok but kem insertattail karyu ae nathi khabar mane 
        // mane lage che ki insertathead thavu joiye n
         carry = sum/10; 
        first = first -> next;

    }
     while( second !=NULL)
    {
        int sum  = carry +  second-> data;
        int digit = sum%10;
        insertattail(head,tail,digit);// ahiya linked list ma add karu chu hu ok but kem insertattail karyu ae nathi khabar mane 
        // mane lage che ki insertathead thavu joiye n
         carry = sum/10; 
        second = second -> next;

    }
     while(carry!=0) // jo carry baki rahi jay tane ok etle
    {
        int sum  = carry;
        int digit = sum%10;
        insertattail(head,tail,digit);// ahiya linked list ma add karu chu hu ok but kem insertattail karyu ae nathi khabar mane 
        // mane lage che ki insertathead thavu joiye n
         carry = sum/10; 

    }
    return addhead;
}
Node * reverse(Node * head)
{
    if(head == NULL)
    {
        return ;
    }
    Node * prev = NULL;
    Node * curr = head;
    Node * forward = NULL;
    while(curr!=NULL)
    {
        forward = curr-> next;
        curr-> next = NULL;
        prev = curr;
        curr = forward;
    }
    return prev;
}

public: // int main jevu che aa 
//Linked list ok 1. first che ane second che ok 
first = reverse(first);
second = reverse(second);
// step 2 ma add kar banne linked list ne 
Node * ans = add(first,second);
ans = reverse(ans);
return ans;

#include <bits/stdc++.h>
using namespace std;
#define int long long int
// first step linked list banay ok and find the mid of it
node *mid(node *head)
{
    node *slow = head;
    node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
node *merge(node *&left, node *&right)
{
    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }
    // aagad nu joyu che mei nathi code karto hu ok
    // ek dummy node le ok ane ans ek point kar ok pachi khali LL ma left ane right ne add kar ok
    // left !=null && right !=null
    // check if left is null and right is null
}
node *mergesort(node *head)
{
    // base case che aa
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *left = mid(head);
    // Node * head 1 = head; // 1st linked list banai ok
    Node *right = mid->next; // 2nd linked list banai ok
    mid->next = NULL;
    // have hu shu kau chu ki banne linked list ne sort kari de
    temp = mergesort(temp);
    right = mergesort(right);
    // have mare hu kau chu ki merge kari de
    node *result = merge(left, right);
    return result;
}
int main()
{
    // ek linked list le ok now divide it in separate parts ok
    // banne part ne sort kar ok pachi sort karya pachi tu merge 2 sorted linked list kar ok
    // TC o(nlogn)
}

// Why merge sort is used in the Linked list and quick sort is used in THe array
/*
1. in array merge sort uses the extra space while quick sort ma aevu kasu nathi ok
quick sort does not require any extra space in the array
2. linked list ma contiguos memeory location nathi ok atle insertion is easy in ll
there fore merge sort is easy in case of ll in o(1) time ok Therefore merge operation of merge sort can be implemented without extra space for linked lists.
*/




class Solution
{
public:
    int distanceTraveled(int mainTank, int additionalTank)
    {
        while (mainTank </ 5)
        {
            int count = 0;
            if (mainTank >= 5)
            {
                mainTank = mainTank - 5;
                count++;
                mainTank = mainTank + 1;
            }
        }
        return (mainTank * 10) + (count * 50);
        else
        {
            return (mainTank)*10;
        }
    }
};
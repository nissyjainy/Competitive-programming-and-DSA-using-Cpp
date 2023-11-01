#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool detect(Node *head)
{
    Node *temp = head;
    map<Node *, bool> visited;
    if (head == NULL)
    {
        return false; // empty mate shu hoy
    }
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        else
        {
            visited[temp] = true;
            temp = temp->next;
        }
    }
    return false;
}
// loop atle hu shu kau chu ki ek to link che j pan aagad bhi bija sathe link che ae ok
// FLOYYDS CYCLE DETECTION ALGO
// slow and fast pointer approach
Node *floyyd(Node *head);
{
    if (head == NULL)
    {
        return NULL; // empty che atle
    }
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow = fast)
        {
            return slow; // return fast ;
        }
    }
    return NULL;
}

// aa walu is not the optimal solution ok leetcode ma not submitted set ma optimal jo ok 
/// FIND THE STARTING NODE OF THE LOOP
Node *start(Node *head)
{
    if (head == NULL)
    {
        return NULL; // empty  mate kai levanu na hoy
    }

    Node *intersection = floyyd(head);
    Node *slow = head;
    while (slow != intersection) // slow ne head par point karyu che ane pachi badha ne ek ek step aagad vadhar ok
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow; // return intersection as banne same j che ok
}
// LOGIC AAMA aevu che ki ek loop ni jgaya nu distance is same as starting thi laine staring node sudhi no distance and intersection to the starting node no distance 
/// REMOVE THE LOOP FROM THE LL
void remove(Node * head)
{
    if(head == NULL)
    {
        return ;
    }
    
    Node * curr = start(head);
    Node * temp = curr;// aama jo temo nu role khali loop ma j che ok aakhi Linked List traverse karvani koij jarur nathi
    while(temp->next  != start)
    {
        temp = temp -> next;
    }
    temp -> next = NULL; 
}/// aama hu shu kau chu ki starting node no prev jo NULL ne point kare to loop remove thai jashe 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
// basically aama jovanu che ki hu ek same node par aai gayo chu atle
// for circular none of the nodes should be pointing to NULL
bool solve(Node * head )
{
    Node * temp = head -> next;
    while(temp!=head && temp!=NULL)
    {
        temp = temp -> next;
    }
    if(temp == NULL)
    {
        return false; // valid for the single node also
    }
    else if(temp == head)
    {
        return true; // valid for the single node also
    }

}    
    


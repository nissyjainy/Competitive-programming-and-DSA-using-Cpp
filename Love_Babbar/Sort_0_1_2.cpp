/*#include <vector>
#include <algorithm>

 Node *  Sort(vector <int> array)
      int n = array .size()-1;
     for (int i =0; i < n ;i++)
     {
         if(array[i]==-1)
         {
             array [n] = -1;
         }
     }
{
    sort(array.begin(),array.end());

}
Node* sortList(Node *head)
{
    vector <int> array;
    Node * temp = head;
    while(temp!= NULL)
    {
        array.push_back(temp->data);
        temp = temp ->next;
    }
   return Sort(array);


}   What is wrong in this is to be seen */

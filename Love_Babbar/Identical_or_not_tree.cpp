   
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
         //base case
         
             if(r1==NULL && r2 == NULL)
             {
                 return true;
             }
             else if(r1==NULL && r2!=NULL)
             {
                 return false;
             }
             else if(r1!=NULL && r2 == NULL)
             {
                 return NULL;
             }
         bool left1 = isIdentical(r1->left , r2->left); // banne ne ek sathe javanu che ok 
      
         bool right1 = isIdentical(r1->right , r2->right); // banne ma ek sathe right karvanuc he 
         bool data = r1->data == r2-> data;
         if(left1 && right1 && data)
         {
             return true;
         }
         else
         {
             return false;
         }
    }
};
// TE AAMA SHU BHUL KARI TI KI BANNE NE EK SATHE TARE TRAVERSE KAR OK JE TE NA KARYU OK LEFT ANE RIGHT MATE OK 
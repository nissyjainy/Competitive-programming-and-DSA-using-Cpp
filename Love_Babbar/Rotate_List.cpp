/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// This is wrong I guess ok 
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // vector thi kar ok

        vector<int> ans;
        vector<int> result;
        ListNode * temp = head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp = temp -> next;
        }
        // ans ma aakhu aai gayu che
        if(k<=ans.size())
        {
            int i = ans.size()-1;
            while(k!=0)
            {
                result.push_back(ans[i]);
                i--;
                k--;
            }
            // vector result ma mare aakhu pachad nu aai gayu che 
             reverse(result.begin(),result.end());
            for(int i =0;i<ans.size()-result.size();i++)
            {
                result.push_back(ans[i]);
            }
        }
        else
        {
            int d = k - ans.size();
            int i = ans.size()-1;
            while(d!=0)
            {
                result.push_back(ans[i]);
                i--;
                d--;
            }
            // vector result ma mare aakhu pachad nu aai gayu che 
            reverse(result.begin(),result.end());
            for(int i =0;i<ans.size()-result.size();i++)
            {
                result.push_back(ans[i]);
            }
        }
        // have mare result ma aakhu aai gayu che ok 
       ListNode * b ;
       for(int i=1;i<=result.size();i++)
       {
           ListNode * a = new ListNode(result[i]);
           if(i==1)
           {
                b = a ;
                head = b;
           }
           else
           {
               b -> next = a;
               b = b -> next;
           }
       }
       return b;
    }
};


#include <bits/stdc++.h>
using namespace std;
class customer
{
private:
  int customer_id;
  string company_name;
  string contact_name;
  string address;
  string country;
  string postcode;
  string telephone_no;
  string fax;
  string mobile;
  string email;
  string website;

public:
  void getdata()
  {
    cout << "enter the customer id" << endl;
    cin >> customer_id;

    cout << "enter the comapny_name" << endl;
    cin >> company_name;
    cout << "enter the conatct_name" << endl;
    cin >> contact_name;
    cout << "enter the address" << endl;
    cin >> address;
    cout << "enter the country" << endl;
    cin >> country;
    cout << "enter the postcode" << endl;
    cin >> postcode;
    cout << "enter the telephone no" << endl;
    cin >> telephone_no;
    cout << "enter the fax" << endl;
    cin >> fax;
    cout << "enter the mobile" << endl;
    cin >> mobile;
    cout << "enter the email" << endl;
    cin >> email;
    cout << "enter the website" << endl;
    cin >> website;
  }
  void search_customer(int cid, customer c)
  {
    if (cid == c.customer_id)
    {
      cout << "yes the customer is present" << endl;
      c.get_details();
      return;
    }
  }
  void add_customer(customer c)
  {
    c.getdata();
  }
  void update_customer(customer c)
  {
    int d;
    cout << " enter the new id" << endl;
    c.customer_id = d;
  }
  
  void get_details()
  {
    cout << " customer id" << endl;
    cout << customer_id << endl;

    cout << " comapny_name" << endl;
    cout << company_name << endl;
    cout << "conatct_name" << endl;
    cout << contact_name << endl;
    cout << " address" << endl;
    cout << address << endl;
    cout << " country" << endl;
    cout << country << endl;
    cout << "postcode" << endl;
    cout << postcode << endl;
    cout << " telephone no" << endl;
    cout << telephone_no << endl;
    cout << " fax" << endl;
    cout << fax << endl;
    cout << " mobile" << endl;
    cout << mobile << endl;
    cout << " email" << endl;
    cout << email << endl;
    cout << " website" << endl;
    cout << website << endl;
    ;
  }
  int cust_id()
  {
    return customer_id;
  }
};
class project : public customer
{
private:
  int projectid;
  int customerid;
  string project_name;
  string start_date;
  string account_manager;
  string project_description;
  int purchase_order_no;

public:
  void getdata(int csid)
  {
    cout << "enter the project id" << endl;
    int prid;
    cin >> prid;
    projectid = prid;

    customerid = csid;
    cout << "enter the project name" << endl;
    string p_name;
    cin >> p_name;
    project_name = p_name;
    cout << "enter the start date" << endl;
    string d;
    cin >> d;
    start_date = d;
    cout << "enter the account manager" << endl;
    string ac_manager;
    cin >> ac_manager;
    account_manager = ac_manager;
    cout << "enter the project description" << endl;
    string prd;
    cin >> prd;
    project_description = prd;
    cout << "enter the purchase order no" << endl;
    int ord;
    cin >> ord;
    purchase_order_no = ord;
  }
  void select_project(int pro_id, project p)
  {
    if (pro_id = p.projectid)
    {
      cout << "yes the project is present" << endl;
      p.get_details();
    }
  }
  void add_project(project p3, int custid)
  {
    p3.getdata(custid);
  }
  void get_details()
  {
    cout << " project id" << endl;

    cout << projectid << endl;
    cout << "customer id" << endl;
    cout << customerid << endl;
    ;
    cout << " project name" << endl;
    cout << project_name << endl;

    cout << " start date" << endl;
    cout << start_date << endl;
    cout << "account manager" << endl;
    cout << account_manager << endl;

    cout << " project description" << endl;

    cout << project_description << endl;
    cout << " purchase order no" << endl;

    cout << purchase_order_no << endl;
  }
};
int main()
{
  vector<customer> v;
  vector<project> pro;
  cout << "enter the number of customer" << endl;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    customer c;
    c.getdata();
    v.push_back(c);
  }
  cout << "enter the customer id to serach" << endl;
  int cid;
  cin >> cid;
  for (int i = 0; i < n; i++)
  {
    v[i].search_customer(cid, v[i]);
  }
  customer c3;
  c3.add_customer(c3);
  v.push_back(c3);
  for (int i = 0; i < n; i++)
  {
    int k = v[i].cust_id();
    project p;
    p.getdata(k);
    pro.push_back(p);
  }
  cout << "enter the project id you want to search" << endl;
  int prid;
  cin >> prid;
  for (int i = 0; i < n; i++)
  {
    pro[i].select_project(prid, pro[i]);
  }
  project p3;
  cout << "enter the customer id for this project you want to add" << endl;
  int pcustid;
  cin >> pcustid;
  p3.add_project(p3, pcustid);
  return 0;
}
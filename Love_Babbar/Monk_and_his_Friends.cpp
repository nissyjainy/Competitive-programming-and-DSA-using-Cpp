#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> ans; // in class
	vector<int> v;	 // outside class
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int arr[];
		for (int i = 0; i < n + m; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			ans.push_back(arr[i]);
		}
		for (int i = 0; i < m; i++)
		{
			v.push_back(arr[i]);
		}
		for (int i = 0; i < ans.size(); i++)
		{
			// ahiya mare iterator jo aena thi thai jashe ok
			if (v.find(ans[i]))
			{
				cout << "YES"
					 << "\n";
			}
			else
			{
				cout << "NO"
					 << "\n";
			}
		}
	}
}

Node *removeDuplicates(Node *head)
{
	set<int> s;
	vector<int> v;
	Node *temp = head;
	while (temp != NULL)
	{
		s.insert(temp->data);
		temp = temp->next;
	}
	// set thi vector ma nakh ok
	for (auto it : s)
	{
		v.push_back(it);
	}
	Node *ans = new Node(v[0]);
	for (int i = 1; i < v.size(); i++)
	{
		Node *result = new Node(v[i]);
		ans->next = result;
		// ans = result;
		// ans = ans -> next;
		result = result->next;
	}
	return ans;
}

Node *removeDuplicates(Node *head)
{
	Node *ans = head;
	Node *result = ans->next;
	if (ans->data != result->data && (result->next != NULL))
	{
		// 		ans = ans->next;
		result = result->next;
	}
	else if (ans->data != result->data && (result->next == NULL))
	{
		return ans;
	}
	else if (ans->data == result->data && result->next != NULL)
	{
		ans->next = result->next;
		result = result->next;
	}
	else if (ans->data == result->data && result->next == NULL)
	{
		// 			ans = ans -> next;
		// 			result = result->next;
		delete (result);
	}

	return ans;
}


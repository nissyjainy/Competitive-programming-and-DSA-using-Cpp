#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
      int temp;
      cin >> temp;
      v.push_back(temp);
    }
    int count = 1;
    vector<int> s;
    for (int i = 0; i < n; i++)
    {
      if (v[i + 1] - v[i] <= 2)
      {
        count++;
      }
      else
      {
        s.push_back(count);
        count = 1;
      }
    }
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (auto x : s)
    {
      maxi = max(maxi, x);
      mini = min(mini, x);
    }
    cout << mini << " " << maxi << endl;
  }
}


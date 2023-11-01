#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, t, n;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> n;
		int a[n];
		for (int k = 0; k < n; k++)
		{
			cin >> a[k];
		}
		sort(a, a + n);
		int sum = 0;
		int count = 0;
		for (int j = 1; j <= n; j++)
		{
			sum = sum + a[j];
			if (sum <= j)
			{
				count++;
			}
		}
		cout << count << "\n";
	}
	return 0;
}


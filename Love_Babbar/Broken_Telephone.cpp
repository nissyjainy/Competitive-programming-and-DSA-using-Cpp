#include <iostream>
using namespace std;

int main()
{
	int i, t, n;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> n;
		
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int count = 0;
		for (int i = 0; i < n; i++)
		{

			if (i>0 && i<n-1)
			{
				if(a[i] != a[i-1] || a[i] != a[i+1])
				{
				    count++;
				}
			}
		}
			if(a[n-1]!=a[n-2])
			{
			    count++;
			}
			if(a[0]!=a[1])
			{
			    count++;
			}
			
		

		cout << count << "\n";
	}
	return 0;
}

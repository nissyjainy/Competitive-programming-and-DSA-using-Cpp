#include <iostream>
using namespace std;

int main()
{
	int i, t, x, y, z;
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> x;
		cin >> y;
		cin >> z;

		if (x > y && y > z && x > z)
		{
			c++;
		}
		else if (y > x && x > z && y > z)
		{
			c++;
		}
		else if (y > z && z > x && y > x)
		{
			a++;
		}
		else if (z > y && y > x && z > x)
		{
			a++;
		}
		else if (x > z && z > y && x > y)
		{
			b++;
		}
		else if (z > x && x > y && z > y)
		{
			b++;
		}

		if (c ==1 )
		{
			cout << "Alice"
				 << "\n";
		}
		else if (b ==1 )
		{
			cout << "Bob"
				 << "\n";
		}
		else
		{
			cout << "Draw"
				 << "\n";
		}
	}
	return 0;
}

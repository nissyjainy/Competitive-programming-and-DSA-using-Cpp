#include <iostream>
using namespace std;
int even(int a)
{
    if (a % 2 == 0)
    {
        cout << "The number is even"
             << "\n";
    }
    else
    {
        cout << "The number is odd"
             << "\n";
    }
}

int main()
{
    int a;
    cin >> a;
    int answer = even(a);
    cout << answer << "\n";
    return 0;
}

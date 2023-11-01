#include <iostream>
#using namespace std;
int isPrime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << "The number is not Prime"
                 << "\n";
        }
        else
        {
            cout << "The number is  Prime"
                 << "\n";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int answer = isPrime(n);
    cout << answer << "\n";
    return 0;
}


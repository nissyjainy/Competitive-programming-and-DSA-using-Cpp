#include <bits/stdc++.h>
using namespace std;
#define int long long int
void saydigit(int n, string arr[])
{
    // base case
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;

    saydigit(n, arr);
    cout << arr[digit] << "\n";
}
int main()
{
    //    Aa question ma mare shu karvanu che ae jo
    // jo tare 123 aapyu hoy to tare one two three lakhvanu ok
    int n;
    cin >> n; // number input lidhu che ok
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << endl
         << endl;
    saydigit(n, arr); // ahiya n to aavshe ane arr bhi to lai che aapde ok
    cout << endl
         << endl;

    return 0;
}


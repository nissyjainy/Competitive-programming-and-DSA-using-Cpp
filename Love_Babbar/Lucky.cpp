#include <iostream> // jo aa questio ma string ke array kidhu hot to aa approach ekdum sachi che but aama kidhu che ki single integer che
using namespace std;

int main()
{
    int i, t;
    cin >> t;
    string s;
    cin >> s;

    int count = 0;
    for (i = 0; i < t; i++)
    {

        if (s[i] == 4)
        {
            count++;
        }
        cout << count << "\n";
    }

    return 0;
}

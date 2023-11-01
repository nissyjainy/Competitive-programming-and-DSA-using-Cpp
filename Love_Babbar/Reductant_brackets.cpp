#include <bits/stdc++.h>
using namespace std;
#define int long long int
int main()
{
    // logic already khabar che ok
    stack<char> s;
    // string is given ok str
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '(')
        {
            // jo tare operator ane opening bracket che to stack ma add kar ok
            s.push(str[i]);
        }
        else
        {
            if (s[i] == ')')
            {
                bool isReductant = true;
                // closing bracket che ok
                // valid given che ok to stack empty vali condition check karvani koi j jarur nathi
                while (s.top() != '(') // jya sudhi opening bracket nathi maltu ok aeni vache aapde check kar ok ki tane operator mael che ki nahi ok
                // jo tane operator male to valid bracket che ok tu aama top par j jove che ok atle
                {

                    char ch = s.top();
                    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' ||)
                    {
                        isReductant = false;
                    }
                    s.pop();
                }
            }
                if (isReductant == true)
                {
                    return true;
                }
                else
                {
                    return false;
                }
                s.pop();
            }
        }
        return false;
    }

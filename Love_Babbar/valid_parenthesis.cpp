#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    // je aave che ae tare string j che ok
    // input string mare str che ok
    for (int i = 0; i < str.length(); i++)
    {
        // have che ne ki khali opening brackets j insert kar ok
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            s.push(str[i]);
        }
        else // if stack j empty hoy to closing bracket ma pop thodi thashe ok
        {
            if (s.empty())
            {
                return false; // atle not a valid parenthesis
            }
            else
            {
                char c = s.top();
            if(c=='(' && s[i]==')' || c=='{' || s[i] =='}' || c=='[' || s[i] ==']')
            {
                s.pop(); // aapdne mali gayu che opening ane closing bracket atle pair bani gayi che ok 
            }
            else
            {
                return false;
            }
            }
        }
        // last ma jo stack aakhu empty che ki nahi 
        // if the stack is empty to return true or return false
    }
}
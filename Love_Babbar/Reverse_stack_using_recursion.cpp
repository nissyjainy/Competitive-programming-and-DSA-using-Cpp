#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(stack<int> s)
{
    // base case 
    if(s.empty)
    {
        return;
    }
}
    stack<int> s;
    while(!s.empty())
    {
        int count = s.top;
        s.pop();
        solve(stack) // recursion walu ok
        s.push(count);
    }
    return s;
int main() // int nahi aave stack valu aavshe ok
{
    // solve(stack); khali lakhva mate lakhyu che ok
    // return stack; 
}
// stack na top walo element kadh ane recursion thi reverse kar ane top valo je che ane insert at bottom kar ok
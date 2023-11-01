#include <bits/stdc++.h>
using namespace std;
void solve(stack(input),int count,int N);
// base case
if(count == N/2)
{
    stack(input).pop();// jyare middle element mali jay to tare pop karvanu ok 
    return;
}
int num = stack.top(); // jya sudhi tare na malyu hoy tayr sudhi bahar kadhine store kar ok 
stack.pop();
solve(stack(input),count+1,N);
stack.push_back(num);
int main()
{
    int count =0;
    solve(stack(input),count,N);
}
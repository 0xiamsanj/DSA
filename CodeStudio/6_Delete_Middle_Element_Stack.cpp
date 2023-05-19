#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &inputStack, int N, int count)
{
    if (count == N / 2)
    {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack, N, count + 1);
    inputStack.push(num);
}
void deleteMiddle(stack<int> &inputStack, int N)
{

    int count = 0;
    solve(inputStack, N, count);
}
#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &myStack, int x)
{
    // Base case
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }

    // Recursive call
    int element = myStack.top();
    myStack.pop();
    solve(myStack, x);
    myStack.push(element);
}
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    solve(myStack, x);
    return myStack;
}

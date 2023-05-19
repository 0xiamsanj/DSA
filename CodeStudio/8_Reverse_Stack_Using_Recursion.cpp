#include<bits/stdc++.h>
using namespace std;


void insertAtBottom(stack<int> &myStack ,int x){
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    //Recursive call
    int element = myStack.top();
    myStack.pop();
    insertAtBottom(myStack,x);
    myStack.push(element);
}

void solve(stack<int> &stack){
    if(stack.empty()){
        return;
    }

    int element = stack.top();
    stack.pop();
    solve(stack);
    insertAtBottom(stack,element);
}

void reverseStack(stack<int> &stack) {
    solve(stack);
}
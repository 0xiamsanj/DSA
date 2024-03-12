#include <bits/stdc++.h>
using namespace std;
void sortMerge(stack<int> &st, int element)
{

    if (st.empty() || (!st.empty() && st.top() < element))
    {
        st.push(element);
        return;
    }

    int num = st.top();
    st.pop();
    sortMerge(st, element);
    st.push(num);
}

void sortStack(stack<int> &st)
{
    // Write your code here
    if (st.empty())
    {
        return;
    }

    int number = st.top();
    st.pop();
    sortStack(st);
    sortMerge(st, number);
}
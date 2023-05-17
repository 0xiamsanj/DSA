#include <bits/stdc++.h>

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *kReverse(Node *head, int k)
{
    // Write your code here.
    // base call
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    int cnt = 0;
    Node *next = NULL;
    Node *prev = NULL;
    Node *curr = head;
    while (cnt < k && curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

    head->next = kReverse(curr, k);

    return prev;
}
// Link : https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=0

/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

Sample Input 1 :

2
1 2 3 4 5 -1
4 0 32 5 48 6 -1

Sample Output 1 :

3
5


*/

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

Node *findMiddle(Node *head)
{
    // Write your code here

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *fast = head->next;
    Node *slow = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }

    return slow;
}
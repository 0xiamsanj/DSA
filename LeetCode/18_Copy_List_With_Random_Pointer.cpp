#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


// Approach #1 : Using mapping technique
class Solution
{
public:
    void insertAtTail(Node *&head, Node *&tail, int data)
    {
        if (head == NULL)
        {
            Node *newNode = new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
    Node *copyRandomList(Node *head)
    {
        Node *cloneHead = NULL;
        Node *cloneTail = NULL;
        Node *originalNode = head;
        unordered_map<Node *, Node *> mapping;

        while (originalNode != NULL)
        {
            insertAtTail(cloneHead, cloneTail, originalNode->val);
            originalNode = originalNode->next;
        }

        originalNode = head;
        Node *cloneNode = cloneHead;

        while (originalNode != NULL)
        {
            mapping[originalNode] = cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        originalNode = head;
        cloneNode = cloneHead;

        while (originalNode != NULL)
        {
            cloneNode->random = mapping[originalNode->random];
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }
        return cloneHead;
    }
};
#include <bits/stdc++.h>
using namespace std;


template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T data)
    {
        next = NULL;
        this->data = data;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

Node<int> *solve(Node<int> *first, Node<int> *second)
{

    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }
    Node<int> *curr1 = first;
    Node<int> *curr2 = second;
    Node<int> *next1 = first->next;
    Node<int> *next2 = second->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if (curr1->data <= curr2->data && curr2->data <= next1->data)
        {
            // Inserting the nodes
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            // Updating the pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            // Moving the pointer window of nodes
            curr1 = curr1->next;
            next1 = next1->next;

            // If the first node reaches null,
            // then append the remaining second list to the curr1 pointer

            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    // Write your code here.

    if (first == NULL)
        return second;

    if (second == NULL)
    {
        return first;
    }

    if (first->data <= second->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}

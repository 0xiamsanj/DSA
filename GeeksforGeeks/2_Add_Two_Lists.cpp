//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Node *buildList(int size)
{
    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node *n)
{
    while (n)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


class Solution
{
public:
    void insert(Node *&head, Node *&tail, int data)
    {
        Node *temp = new Node(data);

        // When head and tail is empty
        if (tail == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }

        tail->next = temp;
        tail = temp;
    }

    Node *add(Node *first, Node *second)
    {
        int carry = 0, sum, digit;
        Node *ans = NULL;
        Node *tail = ans;
        while (first != NULL && second != NULL)
        {
            sum = first->data + second->data + carry;
            digit = sum % 10;
            insert(ans, tail, digit);
            carry = sum / 10;

            // Updating the pointers
            first = first->next;
            second = second->next;
        }

        while (first != NULL)
        {
            sum = first->data + carry;
            digit = sum % 10;
            insert(ans, tail, digit);
            carry = sum / 10;

            // Updating the pointers
            first = first->next;
        }

        while (second != NULL)
        {
            sum = second->data + carry;
            digit = sum % 10;
            insert(ans, tail, digit);
            carry = sum / 10;

            // Updating the pointers
            second = second->next;
        }

        while (carry != 0)
        {
            sum = carry;
            digit = sum % 10;
            insert(ans, tail, digit);
            carry = sum / 10;
        }

        return ans;
    }

    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node *addTwoLists(Node *l1, Node *l2)
    {
        l1 = reverse(l1);
        l2 = reverse(l2);

        Node *ans = add(l1, l2);
        ans = reverse(ans);

        return ans;
    }
};


// } Driver Code Ends
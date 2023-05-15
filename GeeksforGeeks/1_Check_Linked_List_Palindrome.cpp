//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
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


// Reversing the second half
Node *reverse(Node *temp1)
{

    Node *curr = temp1;
    Node *prev = NULL;
    Node *nextNode = NULL;

    while (curr != NULL)
    {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

// Getting the middle node
Node *getMid(Node *head)
{
    Node *middle = NULL;
    Node *fast = head->next;
    Node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

class Solution
{
public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {

        if (head == NULL || head->next == NULL)
        {
            return true;
        }

        // Getting the middle
        Node *middle = getMid(head);

        Node *temp = middle->next;
        middle->next = reverse(temp);

        Node *head1 = head;
        Node *head2 = middle->next;
        while (head2 != NULL)
        {
            if (head1->data != head2->data)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        return true;
    }
};

//{ Driver Code Starts.
/* Driver program to test above function*/

// } Driver Code Ends
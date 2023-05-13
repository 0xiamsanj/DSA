#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};



class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        ListNode *curr = head;
        ListNode *nextNode;
        while (curr != NULL && curr->next != NULL)
        {
            nextNode = curr;
            while (nextNode->next != NULL)
            {
                if (curr->val == nextNode->next->val)
                {
                    curr->next = nextNode->next->next;
                }
                else
                {
                    nextNode = nextNode->next;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};
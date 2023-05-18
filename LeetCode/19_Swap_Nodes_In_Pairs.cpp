#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
    class Solution
    {
    public:
        ListNode *swapPairs(ListNode *head)
        {
            if (head == NULL || head->next == NULL)
            {
                return head;
            }

            int cnt = 0;
            ListNode *prev = NULL;
            ListNode *next = NULL;
            ListNode *curr = head;

            while (cnt < 2 && curr != NULL)
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                cnt++;
            }

            head->next = swapPairs(curr);

            return prev;
        }
    };
<<<<<<< HEAD
#include<bits/stdc++.h>

struct ListNode
{
    int val;
    ListNode *next;
};
    class Solution
    {
    public:
        int getLength(ListNode *head)
        {
            ListNode *temp = head;
            int count = 0;
            while (temp != NULL)
            {
                count++;
                temp = temp->next;
            }
            return count;
        }
        ListNode *removeNthFromEnd(ListNode *head, int n)
        {
            if (head == NULL || head->next == NULL)
            {
                return NULL;
            }
            int len = getLength(head);
            int pos = len - n + 1;
            int cnt = 1;
            // cout<<len;
            ListNode *temp = head;
            ListNode *prev = NULL;
            while (cnt < pos)
            {
                prev = temp;
                temp = temp->next;
                cnt++;
            }

            if (prev == NULL)
                head = head->next;
            else
            {
                prev->next = prev->next->next;
            }
            // delete temp;

            return head;
        }
=======
#include<bits/stdc++.h>

struct ListNode
{
    int val;
    ListNode *next;
};
    class Solution
    {
    public:
        int getLength(ListNode *head)
        {
            ListNode *temp = head;
            int count = 0;
            while (temp != NULL)
            {
                count++;
                temp = temp->next;
            }
            return count;
        }
        ListNode *removeNthFromEnd(ListNode *head, int n)
        {
            if (head == NULL || head->next == NULL)
            {
                return NULL;
            }
            int len = getLength(head);
            int pos = len - n + 1;
            int cnt = 1;
            // cout<<len;
            ListNode *temp = head;
            ListNode *prev = NULL;
            while (cnt < pos)
            {
                prev = temp;
                temp = temp->next;
                cnt++;
            }

            if (prev == NULL)
                head = head->next;
            else
            {
                prev->next = prev->next->next;
            }
            // delete temp;

            return head;
        }
>>>>>>> 5ba302d31516416083e500390e43ecadc26b0b17
    };
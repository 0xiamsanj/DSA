#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int data)
    {
        this->val = data;
        this->next = NULL;
    }
};
class Solution
{
public:
    void insert(ListNode *&head, ListNode *&tail, int data)
    {
        ListNode *temp = new ListNode(data);

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

    ListNode *add(ListNode *first, ListNode *second)
    {
        int carry = 0, sum, digit;
        ListNode *ans = NULL;
        ListNode *tail = ans;
        while (first != NULL && second != NULL)
        {
            sum = first->val + second->val + carry;
            digit = sum % 10;
            insert(ans, tail, digit);
            carry = sum / 10;

            // Updating the pointers
            first = first->next;
            second = second->next;
        }

        while (first != NULL)
        {
            sum = first->val + carry;
            digit = sum % 10;
            insert(ans, tail, digit);
            carry = sum / 10;

            // Updating the pointers
            first = first->next;
        }

        while (second != NULL)
        {
            sum = second->val + carry;
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

    
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
       
        ListNode *ans = add(l1, l2);

        return ans;
    }
};
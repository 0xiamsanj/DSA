// Link : https://leetcode.com/problems/reverse-linked-list/description/

/*Given the head of a singly linked list, reverse the list, and return the reversed list.

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
*/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val; 
    ListNode * next;
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         if(head == NULL || head->next == NULL){
        return head;
    }

    ListNode * prev = NULL;
    ListNode * curr =head;
    ListNode *nextNode;
    while(curr!=NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
    }
};
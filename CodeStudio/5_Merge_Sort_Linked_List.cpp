<<<<<<< HEAD
#include<bits/stdc++.h>

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node *findMiddle(node *head)
{
    node *fast = head->next;
    node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node *merge(node *left, node *right)
{
    if (right == NULL)
    {
        return left;
    }
    if (left == NULL)
    {
        return right;
    }
    node *ans = new node(-1);
    node *temp = ans;

    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}
node *mergeSort(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // Write your code here.
    node *middle = findMiddle(head);

    node *left = head;
    node *right = middle->next;
    middle->next = NULL;

    // splitting the left half
    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}
=======
#include<bits/stdc++.h>

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node *findMiddle(node *head)
{
    node *fast = head->next;
    node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node *merge(node *left, node *right)
{
    if (right == NULL)
    {
        return left;
    }
    if (left == NULL)
    {
        return right;
    }
    node *ans = new node(-1);
    node *temp = ans;

    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}
node *mergeSort(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // Write your code here.
    node *middle = findMiddle(head);

    node *left = head;
    node *right = middle->next;
    middle->next = NULL;

    // splitting the left half
    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}
>>>>>>> 5ba302d31516416083e500390e43ecadc26b0b17

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Node creation - Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Node deletion - Destructor
    ~Node()
    {
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
    }
};


Node * floydCycle(Node * head){
    if(head == NULL){
        return head;
    }

    Node * slow = head;
    Node * fast = head;
    while(slow!=NULL && fast != NULL){
        fast  = fast -> next;
        if(fast!=NULL){
            fast = fast->next;
        }

        slow = slow ->next;

        if(slow == fast){
            return slow;
        }
    }
    return NULL;
} 




Node * startingCyclePoint(Node * head){

    if(head == NULL){
        return head; 
    }
    Node * intersect = floydCycle(head);
    Node * slow = head;
    while(intersect!=NULL && slow!=NULL){
        intersect = intersect->next;
        slow = slow->next;
        if(slow == intersect){
            return slow;
        }
    }

    return NULL;

}



Node * removeLoop(Node * head){

    if(head == NULL){
        return head;
    }
    Node * starting = startingCyclePoint(head);
    Node * temp = head; 
    while(temp->next!= starting){
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}
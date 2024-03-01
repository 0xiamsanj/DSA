#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node * prev;
    Node * next;


    Node(int data){
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }


    //Node deletion - Destructor 
    ~Node(){
        if(this->next != NULL){
            this->next =NULL;
            delete next;
        }
    }
};


void insertAtHead(Node * &head, int data){
    if(head == NULL){
        Node * temp = new Node(data);
        head = temp;
    }
    else{
        Node * temp = new Node(data);
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
    
}


void insertAtTail(Node * &tail, int data){
    Node * temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtMiddle(Node * &head,Node * &tail,int position, int data){
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertAtTail(tail,data);
        return;
    }
    Node * nodeToInsert = new Node(data);
    nodeToInsert -> prev = temp;
    nodeToInsert -> next = temp->next;
    temp -> next = nodeToInsert;
    temp->next -> prev = nodeToInsert;

    
}


void deleteNode(Node * &head,Node * &tail, int position){
    if(position == 1){
        Node * temp = head;
        temp -> next -> prev = NULL;
        head = head->next;
        temp->next =NULL;
        delete temp;
    }
    else{
        Node * prev = NULL;
        Node * curr = head;
        int cnt=1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++; 
        }
        if(curr->next == NULL){
            prev ->next = NULL;
            tail = curr->prev;
            curr->prev = NULL;
            delete curr;
            return;
        }
        prev->next = curr->next;
        curr ->next->prev = curr->prev;
        curr->next = curr->prev = NULL;
        delete curr;
    }
}

void print(Node * head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node * head){
    Node * temp = head;
    int count;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count; 
}

int main()
{

    Node * head = new Node(10);
    Node * tail = head;
    insertAtHead(head,20);
    insertAtHead(head,12);
    insertAtHead(head,4);
    insertAtTail(tail, 30);
    print(head);
    insertAtMiddle(head,tail,4,222);
    print(head);
    deleteNode(head,tail, 6);
    print(head);
    cout<<tail->data;
    return 0;
}
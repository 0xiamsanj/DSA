#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    
    //Node creation - Constructor 
    Node(int data){
        this->data = data;
        this->next=NULL;
    }
    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }


    //Node deletion - Destructor 
    ~Node(){
        if(this->next != NULL){
            this->next =NULL;
            delete next;
        }
    }
};



void insertAtHead(Node* &head, int data){
    Node * temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node * temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}


void insertInMiddle(Node * & head, Node * &tail, int position, int data){
     if(position == 1){
        insertAtHead(head,data);
        return;
     }


     int cnt = 1;
     Node * temp = head;
     while(cnt<position-1){
        temp = temp->next;
        cnt++;
     }

    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }

    Node * nodeToInsert = new Node(data);
    nodeToInsert -> next = temp ->next;
    temp->next = nodeToInsert;
    
}


//Delete the node at a given position 
void deleteNode(Node * &head, int position){
    if(position == 1){
        Node * temp = head;
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
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void printLinkedList(Node * &head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
    cout<<endl;
}

int main()
{
    Node * node = new Node(10);
    Node * head = node;
    Node * tail = node;
    insertAtHead(head,20); 
    insertAtHead(head,2);
    insertAtTail(tail,20); 
    insertAtTail(tail,2);
    insertInMiddle(head,tail,3,90);
    printLinkedList(head);
    deleteNode(head,3);
    printLinkedList(head);
    
    return 0;
}
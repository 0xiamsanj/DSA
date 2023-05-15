
#include <bits/stdc++.h> 
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *removeDuplicates(Node *head)
{
   

    Node * prev = NULL;
    Node * curr = head;

    unordered_map<int, bool> visited;
    while(curr!=NULL){
        if(visited.find(curr->data)==visited.end()){
          
            visited[curr->data] = true;
       
            prev = curr;
            curr = curr->next;
        }
        else {
            prev->next = curr->next;
      
            curr = curr->next;
        }
    }

    return head;
}
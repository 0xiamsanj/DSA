#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    //Constructor 

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* build(Node* root){

    int data;
    cout<<"Enter the data: ";
    cin>>data;
    if(root == NULL)
    
    root = new Node(data);

    if(data == -1)
    return NULL;

    cout<<"Enter the data for left node for "<<data<<endl;
    root->left = build(root);

    cout<<"Enter the data for right node for "<<data<<endl;
    root->right = build(root);

    return root;
    
}

int main()
{
    Node* root = NULL;
    build(root);
    cout<<"tree constructed";
    return 0;
}
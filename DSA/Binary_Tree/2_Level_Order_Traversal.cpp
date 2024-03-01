#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    // Constructor

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *build(Node *root)
{
    int data;
    cout << "Enter the data: "<<endl;
    cin >> data;
    if (root == NULL)
    {
        root = new Node(data);
    }

    if (data == -1)
        return NULL;

    cout << "Enter the data for left node for " << data << endl;
    root->left = build(root);

    cout << "Enter the data for right node for " << data << endl;
    root->right = build(root);

    return root;
}

void preorder(Node* root){
    Node* temp = root;
    if(temp == NULL)
    return;

    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

      while(!q.empty()){
        Node* temp = q.front();
       
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{

    Node *root = NULL;
    //Data : 2 3 -1 -1 6 -1 -1 -2 7 8 -1 -1 9 -1 -1
    root = build(root);
    queue <int> q;
    q.push(root->data);
    cout<<"Level Order traversal"<<endl;                                                             
    // levelOrderTraversal(root);
    preorder(root);
    return 0;
}
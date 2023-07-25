#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST{
    private:
    Node* root;
    int size;

    public:
    BST(){
        root=NULL;
        size=0;
    }

    void insert(int data){
        root=insertHelper(data,root);
    }

    Node* insertHelper(int data,Node* root){
        if(root==NULL){
            return new Node(data);
        }
        if(root->data>=data){
          root->left=insertHelper(data,root->left);
        }else{
            root->right=insertHelper(data,root->right);
        }
        return root;
    }

    void preorder(){
        cout<<"Preorder: ";
        preorderHelper(root);
        cout<<endl;
    }
    void preorderHelper(Node* root){
        if(root==NULL){
            return ;
        }
        cout<<root->data<<" , ";
        preorderHelper(root->left);
        preorderHelper(root->right);
    }

    void inorder(){
        cout<<"inorder: ";
        inorderHelper(root);
        cout<<endl;
    }
    void inorderHelper(Node* root){
        if(root==NULL){
            return ;
        }
        inorderHelper(root->left);
        cout<<root->data<<" , ";
        inorderHelper(root->right);
    }

    bool search(int data){
        return searchHelper(data , root);
    }
    bool searchHelper(int data,Node* root){
        if(root==NULL){
            return false;
        }
        if(root->data==data){
            return true;
        }else if(data<root->data){
            return searchHelper(data,root->left);
        }else{
            return searchHelper(data,root->right);
        }
    }
};

int main(){
    BST b;
    b.insert(10);
    b.insert(1);
    b.insert(4);
    b.insert(13);
    b.insert(20);
    b.inorder();
    b.preorder();

    cout<<b.search(3)<<endl ;
    cout<<b.search(13);
    return 0;
}
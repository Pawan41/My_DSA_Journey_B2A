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

Node *BuildTree(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }
    cout << "I am currently at Node " << root->data << endl;
    cout << "Enter 1 if you want enter a data in left otherwise enter 2 for right  " << endl;
    int user;
    cin >> user;
    if (user == 1)
    {
        root->left = BuildTree(root->left, data);
    }
    else
    {
        root->right = BuildTree(root->right, data);
    }
    return root;
}

void Inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ,";
    Inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ,";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ,";
}
void levelOrder1(Node *root)
{
    queue<Node *> q;
    q.push(root);
    int level = 0;

    while (!q.empty())
    {
        int n = q.size();
        cout << "Level : " << level << " contain " << n << "numbers of nodes " << endl;
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
        level++;
        cout << endl;
    }
}

void levelOrder(Node *root)
{

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        cout << curr->data << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter how many node you want to insert: " << endl;
    int n;
    cin >> n;

    // creating a tree
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data: " << endl;
        int data;
        cin >> data;
        root = BuildTree(root, data);
    }

    Inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelOrder(root);
    return 0;
}
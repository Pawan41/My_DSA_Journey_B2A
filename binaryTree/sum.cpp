#include <bits/stdc++.h>
using namespace std;

// A Binary tree node
class Node
{
public:
    int data;
    Node *left, *right;

    // Constructor to create a new node
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void treePathsSumUtil(Node *root, vector<string> currPath, vector<vector<string>> &allPath)
{
    // Base Case
    if (root == NULL)
        return;

    // append the root data in string format in currPath
    currPath.push_back((to_string)(root->data));

    // if we found a leaf node we copy the currPath to allPath
    if (root->left == NULL && root->right == NULL)
        allPath.push_back(currPath);

    // traverse in the left subtree
    treePathsSumUtil(root->left, currPath, allPath);

    // traverse in the right subtree
    treePathsSumUtil(root->right, currPath, allPath);

    // remove the current element from the path
    currPath.pop_back();
}
int treePathsSum(Node *root)
{

    // store all the root to leaf path in allPath
    vector<vector<string>> allPath;
    vector<string> v;
    treePathsSumUtil(root, v, allPath);

    for (auto x : allPath)
    {
        for (auto y : x)
        {
            cout << y;
        }
        cout << endl;
    }

    // store the sum
    int s = 0;

    for (auto pathNumber : allPath)
    {
        string k = "";

        // join the pathNumbers to convert them
        // into the number to calculate sum
        for (auto x : pathNumber)
            k = k + x;

        s += stoi(k);
    }
    return s;
}

// Driver code
int main()
{
    Node *root = new Node(6);
    root->left = new Node(3);
    root->right = new Node(5);
    root->left->left = new Node(2);
    root->left->right = new Node(5);
    root->right->right = new Node(4);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);

    cout << "Sum of all paths is : " << treePathsSum(root);
    return 0;
}
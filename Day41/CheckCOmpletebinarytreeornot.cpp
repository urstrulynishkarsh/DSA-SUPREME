#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node *BuildTree()
{
    int data;
    cout << "Enter the data of the Node:";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    root->left = BuildTree();
    root->right = BuildTree();
    return root;
}
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}

bool isCompleteBinaryTree(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    int diff = abs(leftheight - rightheight);
    bool ans1 = (diff <= 1);
    bool leftcall = isCompleteBinaryTree(root->left);
    bool rightcall = isCompleteBinaryTree(root->right);
    if (leftcall && rightcall && ans1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node *root = NULL;
    root = BuildTree();
    cout << isCompleteBinaryTree(root) << endl;
}
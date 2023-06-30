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
Node *buildTree()
{
    int data;
    cout << "Enter the data of the node:";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "Enter the left value of part " << data << " node:" << endl;
    root->left = buildTree();
    cout << "Enter the right value of part " << data << " node:" << endl;
    root->right = buildTree();
    return root;
}
void inorderTraversal(Node *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
void preorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void postorderTraversal(Node *root)
{
    if (root == NULL)
        return;
    postorderTraversal(root->left);

    postorderTraversal(root->right);
    cout << root->data << " ";
}
int main()
{
    Node *root = NULL;
    root = buildTree();
    cout << "InorderTraversal: ";
    inorderTraversal(root);
    cout << endl;
    cout << "preorderTraversal: ";
    preorderTraversal(root);
    cout << endl;
    cout << "postorderTraversal: ";
    postorderTraversal(root);
}
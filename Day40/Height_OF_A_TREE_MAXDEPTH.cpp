#include <iostream>
#include <queue>
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
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}
int main()
{
    Node *root = NULL;
    root = buildTree();
    cout << "height of a tree: " << height(root);
}
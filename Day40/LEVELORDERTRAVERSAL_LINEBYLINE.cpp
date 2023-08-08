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
void LevelOrderTraversalLineByLine(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
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
    root = buildTree();
    LevelOrderTraversalLineByLine(root);


    
}

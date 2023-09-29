#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node *InsertInToBST(Node *root,int data)
{
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }
    if(root->data>data)
    {
        root->left=InsertInToBST(root->left,data);
    }
    else{
        root->right=InsertInToBST(root->right,data);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=InsertInToBST(root,data);
        cin>>data;
    }
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
            if (temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if (temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorderTraversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
     inorderTraversal(root->right);

    
}
void preorderTraversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);

    
}
void postorderTraversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorderTraversal(root->left);

     postorderTraversal(root->right);
    cout<<root->data<<" ";

    
}
int main()
{
    Node *root=NULL;
    cout<<"Enter the data for the node: ";
    takeInput(root);
    cout<<"printing the levelOrder Traversal: "<<endl;
    LevelOrderTraversalLineByLine(root);
    cout<<endl;
     cout<<"printing the inOrder Traversal: "<<endl;
     inorderTraversal(root);
       cout<<endl;
         cout<<"printing the preOrder Traversal: "<<endl;
     preorderTraversal(root);
       cout<<endl;
         cout<<"printing the postOrder Traversal: "<<endl;
     postorderTraversal(root);
       cout<<endl;


}
#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node * right;

    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

int findPosition(int arr[],int n, int element)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }

    }
    return -1;
}

Node* buildTreeFromInorderPreorder(int inorder[],int preorder[],int size,int &preindex,int instart,int inend)
{
    // base case
    if(preindex>=size || instart>inend)
    {
        return NULL;
    }


    // step1
    int element=preorder[preindex];
    preindex++;
    Node * root=new Node(element);
    int pos=findPosition(inorder,size,element);
    root->left=buildTreeFromInorderPreorder(inorder,preorder,size,preindex,instart,pos-1);
    root->right=buildTreeFromInorderPreorder(inorder,preorder,size,preindex,pos+1,inend);

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
    int inorder[]={3,1,4,5,2};
    int preorder[]={5,1,3,4,2};
    int size=5;
    int preindex=0;
    int instart=0;
    int inend=size-1;

    Node *root=buildTreeFromInorderPreorder(inorder,preorder,size,preindex,instart,inend);

    cout<<"printing LevelOrderTraversalLineByLine"<<endl;
     LevelOrderTraversalLineByLine(root);

}
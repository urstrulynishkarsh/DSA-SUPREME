#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {

    }
};

Node *Sort(Node *&head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    Node *zeroHead=new Node(-1);
    Node *oneHead=new Node(-1);
    Node *twoHead=new Node(-1);

    Node *ZeroTail=zeroHead;
    Node *OneTail=oneHead;
    Node *TwoTail=twoHead;

    Node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data==0)
        {
            Node *temp=curr;
            curr=curr->next;
            temp->next=NULL;

            ZeroTail->next=temp;
            ZeroTail=temp;
        }
         else if(curr->data==1)
        {
            Node *temp=curr;
            curr=curr->next;
            temp->next=NULL;

            OneTail->next=temp;
            OneTail=temp;
        }
         else  if(curr->data==0)
        {
            Node *temp=curr;
            curr=curr->next;
            temp->next=NULL;

            TwoTail->next=temp;
            TwoTail=temp;
        }

    }
  

    Node *temp=oneHead;
    oneHead=oneHead->next;
    temp->next=NULL;
    delete temp;

    temp=twoHead;
    twoHead=twoHead->next;
    temp->next=NULL;
    delete temp;

    if(oneHead!=NULL)
    {
        ZeroTail->next=oneHead;
        if(twoHead!=NULL)
        {
            ZeroTail->next=twoHead;
        }
    }
    else{
         if(twoHead!=NULL)
        {
            ZeroTail->next=twoHead;
        }
    }


    temp=zeroHead;
    zeroHead=zeroHead->next;
    temp->next=NULL;
    delete temp;



    return zeroHead;

}

void print(Node *&head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    Node *head=new Node(0);
    Node *second=new Node(1);
    Node *third=new Node(0);
    Node *fourth=new Node(2);
    Node *fifth=new Node(1);
    
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
     print(fifth);

   

    // Sort(head);
    // print(head);

   

  


}
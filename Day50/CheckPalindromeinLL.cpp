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
};
Node* reverse(Node *&head)
{
    Node *prev=NULL;
    Node *curr=head;
    Node *forward=curr->next;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

bool palindrome(Node *&head)
{
    if(head==NULL)
    {
        return true;
    }
    if(head->next==NULL)
    {
        return true;
    }
    Node *slow=head;
    Node *fast=head->next;
    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
    }
    

    Node *reverseLLKaHead=reverse(slow->next);
    slow->next=reverseLLKaHead;
    Node *temp1=head;
    Node *temp2=reverseLLKaHead;
    while(temp2!=NULL)
    {
        if(temp1->data!=temp2->data)
        {
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;
}
int main()
{
    Node *head=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *fourth=new Node(20);
    Node *fifth=new Node(200);
    
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    if(palindrome(head))
    {
        cout<<"linked list is palindrome";
    }
    else
    {
       cout<<"linked list is not palindrome";
    }


}
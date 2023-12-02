#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *&first)
{
    Node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

bool isCircular(Node *&head)
{
    if(head==NULL)
    {
        return false;
    }
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        if(slow==fast)
        {
            return true;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    return false;
}

int main(){
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);

     first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next=third;
   

    cout<<isCircular(first);
}
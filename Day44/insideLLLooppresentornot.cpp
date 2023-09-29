#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

class Node{
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


bool checkLLCircular(Node *&head){
    unordered_map<Node*,bool> visit;

    Node *temp=head;
        //  cout<<"first iteration for "<<temp->data<<endl;
        //     cout<<"second iteration for "<<temp->next->data<<endl;
    while(temp!=NULL)
    {
        if(visit.find(temp)==visit.end())
        {
            cout<<"first iteration for "<<temp->data<<endl;
            visit[temp]=true;
        }
        else{
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main(){

    Node *first=new Node(10);
    Node *second=new Node(20);
     Node *third=new Node(30);
      Node *fourth=new Node(40);
     Node *fifth=new Node(50);
       Node *sixth=new Node(60);

     first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next=second;
    


    cout<<checkLLCircular(first);



}
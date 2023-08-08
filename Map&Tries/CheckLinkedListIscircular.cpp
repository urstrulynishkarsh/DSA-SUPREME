#include<iostream>
#include<unordered_map>
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



bool checkCircular(Node *&head) {
    unordered_map<Node*, bool> visited;

    Node *temp = head;
    while (temp != NULL) {
        if (visited.find(temp) != visited.end()) {
            return true; // Cycle detected
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false; // No cycle found
}
int main()
{


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
    sixth->next = first;


    cout<<checkCircular(first);


    
    

}
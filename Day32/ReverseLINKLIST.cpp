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
void print(Node *&Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *reverseLinkedList(Node *&Previous, Node *&Current)
{
    // base case
    if (Current == NULL)
    {
        return Previous;
    }
    Node *Forward = Current->next;
    Current->next = Previous;
    reverseLinkedList(Current, Forward);
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    print(first);
    cout << endl;
    Node *Current = first;
    Node *Previous = NULL;
    reverseLinkedList(Previous, Current);
    print(first);
}
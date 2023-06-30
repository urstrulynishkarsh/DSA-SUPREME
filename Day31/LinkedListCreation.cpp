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

void inserthead(Node *&HEAD, int data)
{
    // create a new node
    Node *newhead = new Node(data);
    newhead->next = HEAD;
    HEAD = newhead;
}
void print(Node *Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    // Node *Head = new Node(10);
    Node *Head = NULL;
    inserthead(Head, 20);
    inserthead(Head, 30);
    inserthead(Head, 40);
    inserthead(Head, 50);
    print(Head);
}
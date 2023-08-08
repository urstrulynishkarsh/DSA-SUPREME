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
    ~Node()
    {
        cout << "delete memory";
    }
};

void print(Node *Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int findLength(Node *Head)
{
    int len = 0;
    Node *temp = Head;
    while (temp != NULL)
    {
        // cout << temp->data << " ";
        temp = temp->next;
        len++;
    }
    return len;
}

void insertionAtHead(Node *&Head, Node *&Tail, int data)
{
    // create a new node in which head and tail are same place
    if (Tail == NULL)
    {
        // create a new node
        Node *newNode = new Node(data);
        Head = newNode;
        Tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = Head;
    Head = newNode;
}
void insertionAtTail(Node *&Head, Node *&Tail, int data)
{
    // if head and tail is null
    if (Tail == NULL)
    {
        // create a new node in which head and tail are same place
        Node *newNode = new Node(data);
        Head = newNode;
        Tail = newNode;
        return;
    }
    // tail is not null
    Node *newNode = new Node(data);
    Tail->next = newNode;
    Tail = newNode;
}

void insertionByPosition(Node *&Head, Node *&Tail, int position, int data)
{
    // if head and tail is null
    if (Tail == NULL)
    {
        // create a new node in which head and tail are same place
        Node *newNode = new Node(data);
        Head = newNode;
        Tail = newNode;
        return;
    }
    // position=0
    if (position == 0)
    {
        insertionAtHead(Head, Tail, data);
        return;
    }
    // position is last
    int len = findLength(Head);
    if (position >= len)
    {
        insertionAtTail(Head, Tail, data);
        return;
    }

    // in  middle insertions by position  find curr and prev;
    int i = 1;
    Node *prev = Head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    Node *newNode = new Node(data);
    newNode->next = curr;
    prev->next = newNode;
}

int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    insertionAtTail(Head, Tail, 10);
    insertionAtHead(Head, Tail, 20);
    insertionAtTail(Head, Tail, 30);
    insertionAtHead(Head, Tail, 40);
    insertionByPosition(Head, Tail, 2, 60);
    insertionByPosition(Head, Tail, 0, 90);
    insertionByPosition(Head, Tail, 9, 90);

    print(Head);
    cout << endl;
    cout << "Head point to: " << Head->data << endl;
    cout << "Tail point to: " << Tail->data << endl;
    delete Head;
    delete Tail;
}
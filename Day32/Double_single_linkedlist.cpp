#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "Node with value: " << this->data << " deleted" << endl;
    }
};
void PrintNode(Node *Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int FindLength(Node *&Head)
{
    int length = 0;
    Node *temp = Head;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

void InsertionAtHead(Node *&Head, Node *&Tail, int data)
{
    if (Head == NULL)
    {
        Node *newNode = new Node(data);
        Head = newNode;
        Tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = Head;
    Head->prev = newNode;
    Head = newNode;
}
void InsertionAtTail(Node *&Head, Node *&Tail, int data)
{
    if (Head == NULL)
    {
        Node *newNode = new Node(data);
        Head = newNode;
        Tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->prev = Tail;
    Tail->next = newNode;
    Tail = newNode;
}
void InsertionByPosition(Node *&Head, Node *&Tail, int Position, int data)
{
    if (Head == NULL)
    {
        Node *newNode = new Node(data);
        Head = newNode;
        Tail = newNode;
        return;
    }
    if (Position < 0)
    {
        cout << "Please enter valid Position: ";
        cout << endl;
        return;
    }
    if (Position == 0)
    {
        InsertionAtHead(Head, Tail, data);
        return;
    }
    int len = FindLength(Head);
    if (Position >= len)
    {
        InsertionAtTail(Head, Tail, data);
        return;
    }
    // int i = 1;
    // Node *Back = Head;
    // while (i < Position)
    // {
    //     Back = Back->next;
    //     i++;
    // }
    // Node *Forward = Back->next;
    // Node *newNode = new Node(data);
    // newNode->next = Forward;
    // Forward->prev = newNode;
    // Back->next = newNode;
    // newNode->prev = Back;

    int i = 1;
    Node *back = Head;
    while (i < Position)
    {
        back = back->next;
        i++;
    }
    Node *newNode = new Node(data);
    back->next->prev = newNode;
    newNode->next = back->next;
    back->next = newNode;
    newNode->prev = back;
}

void deletionAtHead(Node *&Head, Node *&Tail)
{
    if (Head == NULL)
    {
        cout << "there is no value inside the for deletion";
        cout << endl;
        return;
    }
    Node *temp = Head;
    Head = Head->next;
    Head->prev = NULL;
    temp->next = NULL;
    delete temp;
}

void deletionByPosition(Node *&Head, Node *&Tail, int Position)
{
    if (Position == 1)
    {
        deletionAtHead(Head, Tail);
        return;
    }
    int len = FindLength(Head);
    if (Position > len)
    {
        cout << "Please Enter a Valid Position:" << endl;
        return;
    }
    if (Position == len)
    {
        Node *temp = Tail;
        Tail = Tail->prev;
        Tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }

    int i = 1;
    Node *left = Head;
    while (i < Position - 1)
    {
        left = left->next;
        i++;
    }
    Node *curr = left->next;
    Node *right = curr->next;
    left->next = right;
    right->prev = left;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}

int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    // deletionAtHead(Head, Tail);
    InsertionAtHead(Head, Tail, 10);
    InsertionAtHead(Head, Tail, 20);
    InsertionAtHead(Head, Tail, 30);
    InsertionAtTail(Head, Tail, 40);
    InsertionAtTail(Head, Tail, 50);
    InsertionByPosition(Head, Tail, 0, 60);
    InsertionByPosition(Head, Tail, 7, 70);
    PrintNode(Head);
    cout << endl;
    deletionAtHead(Head, Tail);
    // cout << endl;
    PrintNode(Head);
    cout << endl;
    deletionByPosition(Head, Tail, 7);

    PrintNode(Head);
    cout << endl;
    cout << "Head points to: " << Head->data << endl;
    cout << "Tail points to: " << Tail->data << endl;
}

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
        cout << "Node with value: " << this->data << " deleted" << endl;
        // cout << "delete memory" << endl;
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

void deletionNode(Node *&Head, Node *&Tail, int position)
{
    if (Head == NULL)
    {
        cout << "There is no Node for deletion!";
        return;
    }
    if (position == 0)
    {
        cout << "there is not value at position 0";
        cout << endl;
        return;
    }
    if (position == 1)
    {
        Node *temp = Head;
        Head = Head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    int len = findLength(Head);
    if (position > len)
    {
        cout << "position is greater than length!";
        cout << endl;
        return;
    }
    if (position == len)
    {
        int i = 1;
        Node *prev = Head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        Node *temp = Tail;
        prev->next = NULL;

        Tail = prev;
        delete temp;
        return;
    }
    int i = 1;
    Node *prev = Head;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
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
    insertionByPosition(Head, Tail, 0, 60);
    insertionByPosition(Head, Tail, 1, 90);
    insertionByPosition(Head, Tail, 9, 90);

    print(Head);
    cout << endl;
    cout << "Length of this linked list is: " << findLength(Head);
    cout << endl;

    deletionNode(Head, Tail, 7);
    // cout << endl;

    print(Head);
    cout << endl;
    cout << "Head point to: " << Head->data << endl;
    cout << "Tail point to: " << Tail->data << endl;

    // delete Head;
    // delete Tail;
}
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

int findLength(Node *&first)
{
    int count = 0;
    Node *temp = first;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

Node *reverseKNodes(Node *&first, int k)
{
    if (first == NULL)
    {
        cout << "there is element inside LinkedList so we can't find it.";
        return NULL;
    }
    int len = findLength(first);
    if (k>len)
    {
        // cout << "Enter valid value for k: ";
        return first;
    }
    Node *prev = NULL;
    Node *curr = first;
    Node *forward = curr->next;
    int count = 0;
    while (count < k && curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if (forward != NULL)
    {
        first->next = reverseKNodes(forward, k);
    }
    return prev;
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
    // sixth->next = NULL;

    print(first);
    cout << endl;
    cout << "reverse K nodes of the linkedlist is: "<<endl;

    first = reverseKNodes(first, 4);
    print(first);
}
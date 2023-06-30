#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    // insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // size of queue

    cout << "size of queue is:" << q.size() << endl;

    // deletion
    q.pop();
    q.pop();

    cout << "size of queue is:" << q.size() << endl;

    // check empty

    if (q.empty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }

    // front element
    cout << "front element is:" << q.front();
}
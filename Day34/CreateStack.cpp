#include <iostream>
using namespace std;
class Stack
{
public:
    // properties
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    // functions

    void push(int data)
    {
        if ((size - top) > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack is overflowed!";
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack is underflowed!";
        }
        else
        {
            top--;
        }
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "stack is underflowed!";
        }
        else
        {
            return arr[top];
        }
    }
    int getsize()
    {
        return top + 1;
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack *s = new Stack(10);

    s->push(10);
    s->push(20);
    s->push(30);
    while (!s->isempty())
    {
        cout << s->peek();
        s->pop();
    }
    cout << endl;

    delete[] s;
}
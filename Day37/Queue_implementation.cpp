#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }

    void push(int data)
    {
        if(rear==size)
        {
            cout<<"Queue is Full";
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop()
    {
        if(front==rear)
        {
            cout<<"Queue is empty";
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
        }
    }
    int getFront()
    {
        if(front==rear)
        {
            cout<<"Queue is Empty";
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int getsize()
    {
        return rear-front;
    }
    bool isEmpty()
    {
        if(front==rear)
        {
            return true;
        }
        else{
            return false;
        }
    }

};



int main(){

    Queue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"Enter the size of Queue: "<<q.getsize()<<endl;
    cout<<"Front Element of the Queue: "<<q.getFront()<<endl;
    cout<<"isEMpty: "<<q.isEmpty()<<endl;
    q.pop();
    cout<<"Enter the size of Queue: "<<q.getsize()<<endl;
    cout<<"Front Element of the Queue: "<<q.getFront()<<endl;
    cout<<"isEMpty: "<<q.isEmpty()<<endl;




}
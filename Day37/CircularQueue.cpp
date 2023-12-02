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
        front=-1;
        rear=-1;
    }
    void push(int data)
    {
        if(rear==(front-1)%(size-1))
        {
            cout<<"Queue is full";
            return;
        }
        else if(front==-1){
            front=rear=0;
            arr[rear]=data;

        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=front;

        }
        else{
            rear++;
            arr[rear]=front;

        }
    }


    void pop()
    {
        if(front==-1)
        {
            cout<<"queue is Empty";
        }
        else if(front==rear)
        {
            arr[front]=-1;
            front=-1;
            rear=-1;

        }
        else if(front==size-1)
        {
            front=0;
        }
        else{
            front++;
        }
    }



};
int main(){
    Queue q(2);
    q.push(1);
    q.push(3);


}
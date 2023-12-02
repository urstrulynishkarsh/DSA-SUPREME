#include<iostream>
using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size)
    {
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void pushRear(int data)
    {
        // full condition
      if((front==0 && rear==size-1) || rear==(front-1)%size)
        {
            cout<<"Queue is full";
            return;
        }
        else if(front==-1){
            front=rear=0;

        }
        else if(front!=0 && rear==size-1)
        {
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=data;
    }
    void pushFront(int data)
    {
         if((front==0 && rear==size-1) || rear==(front-1)%size)
        {
            cout<<"Queue is full";
            return;
        }
        else if(front==-1)
        {
            front=rear=0;
        }
        else if(front==0 && rear!=size-1)
        {
            front=size-1;
        }
        else{
            front--;
        }
        arr[front]=data;
    }

    void popFront()
    {
        if(front==-1)
        {
            cout<<"Queue is Empty";
            return;
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
    void popRear()
    {
          if(front==-1)
        {
            cout<<"Queue is Empty";
            return;
        }
        else if(front==rear)
        {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(rear==0)
        {
            rear=size-1;
        }
        else{
            rear--;
        }

    }
    int getFront()
    {
        if(front==rear)
        {
            cout<<"Queue is Empty";
          
        }
        else{
            return arr[front];
        }
    }
    int getRear()
    {
         if(front==rear)
        {
            cout<<"Queue is Empty";
        }
        else{
            return arr[rear];
        }

    }
    int getSize()
{
    if (front == -1)
    {
        return 0;
    }
    else if (front <= rear)
    {
        return rear - front + 1;
    }
    else
    {
        return (size - front) + (rear + 1);
    }
}
};


int main()
{
    Deque dq(10);
    dq.pushFront(10);
    dq.pushFront(20);
    dq.pushFront(30);

    dq.pushRear(40);
    dq.pushRear(50);
    dq.pushRear(60);


    cout<<"front element of Double Ended Queue is: "<<dq.getFront()<<endl;
    
     cout<<"rear element of Double Ended Queue is: "<<dq.getRear()<<endl;
         cout<<"Size of Double Ended Queue is: "<<dq.getSize()<<endl;
    dq.popFront();
    dq.popRear();
        cout<<"front element of Double Ended Queue is: "<<dq.getFront()<<endl;
    
     cout<<"rear element of Double Ended Queue is: "<<dq.getRear()<<endl;
     cout<<"Size of Double Ended Queue is: "<<dq.getSize()<<endl;
    




}
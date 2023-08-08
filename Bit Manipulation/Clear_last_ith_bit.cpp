#include<iostream>
using namespace std;
int clearGroupithBit(int &n, int i)
{
    int mask=(-1<<i);
    return n=n&mask;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i;
    cout<<"enter how many bits you want to clear: ";
    cin>>i;
    cout<<clearGroupithBit(n,i);
}
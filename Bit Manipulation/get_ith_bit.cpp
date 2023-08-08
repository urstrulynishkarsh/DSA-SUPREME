#include<iostream>
using namespace std;


int SetithBit(int n,int i){
    int mask=1<<i;
    int ans=n&mask;
    if(ans==0){
        return 0;
    }
    else{
    return 1;
    }

}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i;
    cout<<"enter the find set ith bit";
    cin>>i;
    cout<<SetithBit(n,i);
    

}
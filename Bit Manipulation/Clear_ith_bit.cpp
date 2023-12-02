#include<iostream>
using namespace std;


void  ChangeithBit(int n,int i){
    int mask=~(1<<i);
    int ans=n&mask;
    cout<<"After clearing ith bit: "<<ans;
    

}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i;
    cout<<"enter the find set ith bit";
    cin>>i;
    ChangeithBit(n,i);
    
}
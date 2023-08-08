#include<iostream>
using namespace std;
void SetithBit(int n,int i)
{
    int mask=1<<i;
    int ans=n|mask;
    cout<<"After seting ith bit: "<<ans;

}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i;
    cout<<"enter the find set ith bit";
    cin>>i;
    SetithBit(n,i);
}
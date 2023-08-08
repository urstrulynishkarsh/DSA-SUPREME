#include<iostream>
using namespace std;
int ClearBitInArange(int &n,int i,int j)
{
    int mask1=(-1<<(i+1));
    int mask2=(1<<j)-1;
    int ans=mask1|mask2;
    return (n&ans);

}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int i,j;
    cout<<"Enter the staring value of range: ";
    cin>>i;
    cout<<"Enter the ending value of range: ";
    cin>>j;
    cout<<ClearBitInArange(n,i,j);

}
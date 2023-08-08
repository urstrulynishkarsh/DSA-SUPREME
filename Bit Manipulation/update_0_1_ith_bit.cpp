#include<iostream>
using namespace std;
void UpdateBit(int &n,int i,int &target)
{
    if(target==1)
    {
        int mask=(1<<i);
        int ans=n|mask;
        cout<<"After Updating :"<<ans;
    }
    else{
        int mask=~(1<<i);
        int ans=n&mask;
        cout<<"after Updating: "<<ans;

    }
    return;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i;
    cout<<"Enter which bit you want to update: ";
    cin>>i;
    int target;
    cout<<"Enter the bit 0 or 1: ";
    cin>>target;
    UpdateBit(n,i,target);

}
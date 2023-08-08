#include<iostream>
#include<vector>
using namespace std;
int minCoin(vector<int> &coins, int amount){


    sort(coins.rbegin(),coins.rend());
    int res=0;
    for(int i=0;i<coins.size();i++)
    {
        if(coins[i]<amount){
            int c=floor(amount/coins[i]);
            res+=c;
            amount-=c*coins[i];
        }
        if(amount==0)
        {
            break;
        }
    }
    return res;

}
int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int> coins(n);
    cout<<"Enter the Element in the vector: ";
    for(int i=0;i<coins.size();i++)
    {
        cin>>coins[i];
    }
    int amount;
    cout<<"Enter the  Amount: ";
    cin>>amount;
    int ans=minCoin(coins,amount);
    cout<<"min coin is: "<<ans;
}
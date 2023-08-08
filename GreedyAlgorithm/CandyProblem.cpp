#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minAmount(vector<int> &v)
{
    sort(v.begin(),v.end());
    int amount =0;
    int buy=0;
    int free=v.size()-1;
    while(buy<=free)
    {
        amount+=v[buy];
        buy++;
        free--;
        free--;
    }
    return amount;


}

int main()
{
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter the price of candy: ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    cout<<minAmount(v);

}
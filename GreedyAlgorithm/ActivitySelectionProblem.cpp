#include<iostream>
#include<vector>
#include<algorithm>
#include <utility>
using namespace std;


bool cmp(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}


int MaxTrain(vector<int> &arr, vector<int> &dep){
        vector<pair<int,int> > data;
        for(int i=0;i<arr.size();i++)
        {
           data.push_back({arr[i], dep[i]});

        }
        sort(data.begin(),data.end(),cmp);

        int count=1;
        cout<<data[0].first<<","<<data[0].second<<endl;
        int lastDepartureTime=data[0].second;
        for(int i=1;i<arr.size();i++)
        {
            if(data[i].first>=lastDepartureTime)
            {
                count++;
                lastDepartureTime=data[i].second;
                cout<<data[i].first<<","<<data[i].second<<endl;

            }
        }
        return count;

}


int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the arrival time of the trains: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> dep(n);
    cout<<"Enter the departure time of the trains: ";
    for(int i=0;i<n;i++)
    {
        cin>>dep[i];
    }

    int ans=MaxTrain(arr,dep);
    cout<<"max train come in platform is: "<<ans;



}
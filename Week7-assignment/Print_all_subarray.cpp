#include<iostream>
#include<vector>
using namespace std;



void printAllSubArray2(vector<int> & nums,int s, int e)
{
    if(e==nums.size())
    {
        return;
    }
    for(int i=s;i<=e;i++)
    {
        cout<<nums[i];
    }
    cout<<endl;
    printAllSubArray2(nums,s,e+1);
}

void printAllSubArray(vector<int> & nums)
{
    for(int s=0;s<nums.size();s++)
    {
        int e=s;

        printAllSubArray2(nums,s,e);
    }
}

int main()
{
    int n=5;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    printAllSubArray(nums);

}
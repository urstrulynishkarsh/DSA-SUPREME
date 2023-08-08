#include <iostream>
#include<vector>
using namespace std;
// int climb(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     int ans = climb(n - 1) + climb(n - 2);
//     return ans;
// }
// int main()
// {
//     int n = 90;

//     int ans = climb(n);
//     cout << "answer is: " << ans << endl;
// }



int solve(vector<int> &dp,int n)
{
    if(n==0||n==1)
    {
        return 1;

    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=solve(dp,n-1)+solve(dp,n-2);
    return dp[n];
}



int main()
{
    int n=45;
    vector<int> dp(n+1,-1);
    int ans=solve(dp,n);
    cout<<ans;
}
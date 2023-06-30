#include <iostream>
#include <climits>
using namespace std;
// O(N^3)
// int Solve(int arr[], int n)
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum = sum + arr[k];
//             }
//             if (sum > maxi)
//             {
//                 maxi = sum;
//             }
//         }
//     }
//     return maxi;
// }

int Solve(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
        }
        if (sum > maxi)
        {
            maxi = sum;
        }
    }
    return maxi;
}
int main()
{
    int arr[7] = {-5, -8, 9, -6, 10, 15};
    int n = 7;
    cout << Solve(arr, n);
}
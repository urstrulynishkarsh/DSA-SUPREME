#include <iostream>
#include <vector>
using namespace std;
int sumunique(vector<int> arr)
{
    int sum = 0;
}
int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << sumunique(arr);
}
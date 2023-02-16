#include <iostream>
#include <vector>
using namespace std;
void allPair(vector<int> arr)
{
    int sum = 9;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            cout << "(" << element << " , " << arr[j] << ")"
                 << " ";
            if (element + arr[j] == sum)
            {
                cout << "(" << element << " , " << arr[j] << ")"
                     << " ";
            }
        }
    }
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
    allPair(arr);
}
#include <iostream>
#include <vector>
using namespace std;
void allPair(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            cout << "(" << element << " , " << arr[j] << ") ";
        }
        cout << endl;
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
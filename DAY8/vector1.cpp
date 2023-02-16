#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> arr;  by default sizeof this vector is 0;
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "vector size: " << arr.size() << endl;
    cout << "vector capacity: " << arr.capacity() << endl;
    int ans = (sizeof(arr) / sizeof(int));
    cout << "answer is: " << ans << endl;
}

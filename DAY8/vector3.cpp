#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
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
    print(arr);
    cout << endl;
    cout << "vector size: " << arr.size() << endl;
    cout << "vector capacity: " << arr.capacity() << endl;
    cout << "inserting element in the vector: ";
    arr.push_back(10);
    arr.push_back(11);
    arr.push_back(12);
    cout << endl;
    print(arr);
    cout << "vector size: " << arr.size() << endl;
    cout << "vector capacity: " << arr.capacity() << endl;
    cout << "popping element: ";
    arr.pop_back();
    arr.pop_back();
    cout << endl;
    cout << "checking vector is empty or not: " << arr.empty();
}
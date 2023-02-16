#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int i = 0;
    while (i != e)
    {
        if (arr[i] == 0)
        {
            swap(arr[s], arr[i]);
            i++;
            s++;
        }
        else
        {
            swap(arr[e], arr[i]);
            e--;
        }
    }
    for (auto value : arr)
    {
        cout << value << " ";
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
    sort(arr);
}
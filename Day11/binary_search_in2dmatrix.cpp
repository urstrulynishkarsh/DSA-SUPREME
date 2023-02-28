#include <iostream>
#include <vector>
using namespace std;
bool BinarySearch(int arr[][100], int row, int col, int target)
{
    int s = 0;
    int e = (row * col) - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int rowindex = mid / col;
        int colindex = mid % col;
        if (arr[rowindex][colindex] == target)
        {
            return true;
        }
        if (arr[rowindex][colindex] < target)
        {

            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}
int main()
{
    int row;
    int col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;
    int arr[100][100];
    cout << "Number all the elements in the 2d array: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int target;
    cout << "Enter the number you want to search for: ";
    cin >> target;
    bool search = BinarySearch(arr, row, col, target);
    if (search)
    {
        cout << "found";
    }
    else
    {
        cout << "not found" << endl;
    }
}
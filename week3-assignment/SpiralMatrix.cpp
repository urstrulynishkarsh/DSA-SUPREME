#include <iostream>
#include <vector>
using namespace std;
void SpiralMatrix(vector<vector<int>> &matrix, vector<int> &ans, int &row, int &col)
{

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    int totalElement = row * col;
    int count = 0;
    while (count < totalElement)
    {
        // for row
        for (int i = startingCol; i <= endingCol && count < totalElement; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;
        for (int i = startingRow; i <= endingRow && count < totalElement; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;
        for (int i = endingCol; i >= startingCol && count < totalElement; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
        for (int i = endingRow; i >= startingRow && count < totalElement; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
}
int main()
{
    int row, col;
    cout << "Enter the row for the matrix: ";

    cin >> row;
    cout << "Enter the column for the matrix: ";
    cin >> col;
    vector<vector<int>> matrix;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j < col; j++)
        {
            int val;
            cin >> val;
            temp.push_back(val);
        }
        matrix.push_back(temp);
    }
    vector<int> ans;
    SpiralMatrix(matrix, ans, row, col);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
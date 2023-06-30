#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int arr[][3], int i, int j, int row, int col, vector<vector<int>> &visited)
{
    if ((i >= 0 && i < row) && (j >= 0 && j < col) && (arr[i][j] == 1) && (visited[i][j] == false))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Maze(int arr[][3], int row, int col, int i, int j, vector<string> &path, vector<vector<int>> &visited, string output)
{
    // base case
    if (i == row - 1 && j == col - 1)
    {
        path.push_back(output);
        return;
    }
    // down check (i+1,j)
    if (isSafe(arr, i + 1, j, row, col, visited))
    {
        visited[i + 1][j] = true;
        Maze(arr, row, col, i + 1, j, path, visited, output + 'D');
        visited[i + 1][j] = false;
    }
    // left check (i,j-1)
    if (isSafe(arr, i, j - 1, row, col, visited))
    {
        visited[i][j - 1] = true;
        Maze(arr, row, col, i, j - 1, path, visited, output + 'L');
        visited[i][j - 1] = false;
    }
    // right check (i,j+1)
    if (isSafe(arr, i, j + 1, row, col, visited))
    {
        visited[i][j + 1] = true;
        Maze(arr, row, col, i, j + 1, path, visited, output + 'R');
        visited[i][j + 1] = false;
    }
    // Up check (i-1,j)
    if (isSafe(arr, i - 1, j, row, col, visited))
    {
        visited[i - 1][j] = true;
        Maze(arr, row, col, i - 1, j, path, visited, output + 'U');
        visited[i - 1][j] = false;
    }
}
int main()
{
    int arr[3][3] = {
        {1, 0, 0},
        {1, 1, 0},
        {1, 1, 1}};
    if (arr[0][0] == 0)
    {
        cout << "Path Does not exist";
    }
    int row = 3;
    int col = 3;

    vector<vector<int>> visited(row, vector<int>(col, false));

    visited[0][0] = true;
    vector<string> path;
    string output = "";

    Maze(arr, row, col, 0, 0, path, visited, output);
    for (auto i : path)
    {
        cout << i << " ";
    }
    if (path.size() == 0)
    {
        cout << "path does not exist";
    }
}
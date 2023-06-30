#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int, bool> rowCheck;
unordered_map<int, bool> UpperLeftDiagonalCheck;
unordered_map<int, bool> BottomLeftDiagonalCheck;

void printSolution(vector<vector<char>> &board, int n, int col)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(vector<vector<char>> &board, int row, int col, int n)
{
    if (rowCheck[row] == true)
        return false;
    else if (UpperLeftDiagonalCheck[(n - 1) + col - row] == true)
        return false;
    else if (BottomLeftDiagonalCheck[row + col] == true)
        return false;

    return true;
}

void solve(vector<vector<char>> &board, int n, int col)
{

    // basecase
    if (col >= n)
    {
        printSolution(board, n, col);
        cout << endl;
        return;
    }
    // 1 case solve kardo bakaya recursion dekh lega
    for (int row = 0; row < n; row++)
    {
        if (isSafe(board, row, col, n))
        {
            // mark 1 if safe
            board[row][col] = 'Q';
            rowCheck[row] = true;
            UpperLeftDiagonalCheck[(n - 1) + col - row] = true;
            BottomLeftDiagonalCheck[row + col] = true;

            // recursive call
            solve(board, n, col + 1);
            // backtracking
            board[row][col] = '-';
            rowCheck[row] = false;
            UpperLeftDiagonalCheck[(n - 1) + col - row] = false;
            BottomLeftDiagonalCheck[row + col] = false;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    // vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<char>> board(n, vector<char>(n, '-'));

    // we need to solve for col 1
    int col = 0;
    solve(board, n, col);
}

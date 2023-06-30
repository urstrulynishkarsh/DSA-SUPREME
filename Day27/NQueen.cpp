#include <iostream>
#include <vector>
using namespace std;
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
    // for checking left row
    int i = row;
    int j = col;
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }
    // for checking upper left diagonal
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {

        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
        i--;
    }
    // for checking bottom left diagonal
    i = row;
    j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
        i++;
    }
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
            // recursive call
            solve(board, n, col + 1);
            // backtracking
            board[row][col] = '-';
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

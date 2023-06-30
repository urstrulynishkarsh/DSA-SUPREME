#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int value, int board[][9], int row, int col)
{
    // row check
    int n = 9;
    for (int i = 0; i < n; col++)
    {
        if (board[row][i] == value)
        {
            return false;
        }
        if (board[i][col] == value)
        {
            return false;
        }

        // 3box check

        if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == value)
        {
            return false;
        }
    }
    return true;
}
bool solve(int board[][9])
{
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 0)
            {
                for (int value = 1; value <= 9; value++)
                {
                    if (isSafe(value, board, i, j))
                    {
                        // insert the value into the box
                        board[i][j] = value;

                        // baaaki recursion dekh lega
                        bool aagekasolution = solve(board);
                        if (aagekasolution == true)
                        {
                            return true;
                        }
                        // backtracking
                        board[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int row = 9;
    int col = 9;
    int board[9][9] = {
        {4, 5, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 2, 0, 7, 0, 6, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 2, 8},
        {0, 0, 0, 9, 5, 0, 0, 0, 0},
        {0, 8, 6, 0, 0, 0, 2, 0, 0},
        {0, 2, 0, 0, 0, 0, 7, 5, 0},
        {0, 0, 0, 0, 0, 0, 4, 7, 6},
        {0, 7, 0, 0, 4, 5, 0, 0, 0},
        {0, 0, 8, 0, 0, 9, 0, 0, 0}};

    // vector<vector<int>> board(row, vector<int>(col, 0));

    solve(board);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

/*
ex1:
your original sudoku board is like:
5   3   .   .   7   .   .   .   .
6   .   .   1   9   5   .   .   .
.   9   8   .   .   .   .   6   .
8   .   .   .   6   .   .   .   3
4   .   .   8   .   3   .   .   1
7   .   .   .   2   .   .   .   6
.   6   .   .   .   .   2   8   .
.   .   .   4   1   9   .   .   5
.   .   .   .   8   .   .   7   9

solved sudoku board is like:
5   3   4   6   7   8   9   1   2
6   7   2   1   9   5   3   4   8
1   9   8   3   4   2   5   6   7
8   5   9   7   6   1   4   2   3
4   2   6   8   5   3   7   9   1
7   1   3   9   2   4   8   5   6
9   6   1   5   3   7   2   8   4
2   8   7   4   1   9   6   3   5
3   4   5   2   8   6   1   7   9

ex2:
your original sudoku board is like:
5   3   .   .   7   .   .   .   .
6   .   .   1   9   5   .   .   .
.   9   8   .   .   .   .   6   .
8   .   .   .   6   .   .   .   3
4   .   .   8   .   3   .   .   1
7   .   .   .   2   .   .   .   6
.   6   .   .   .   .   2   8   .
.   .   .   4   1   9   .   .   4
.   .   .   .   8   .   .   7   9

solution not possible!

 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>> &board, int row, int col, char dig) {
  // check horizontally
  for (int j = 0; j < 9; j++) {
    if (board[row][j] == dig) {
      return false;
    }
  }

  // check vertically
  for (int i = 0; i < 9; i++) {
    if (board[i][col] == dig) {
      return false;
    }
  }

  // check 3 X 3 grid
  int sr = (row / 3) * 3; // starting row
  int sc = (col / 3) * 3; // staring col
  for (int i = sr; i < sr + 3; i++) {
    for (int j = sc; j < sc + 3; j++) {
      if (board[i][j] == dig) {
        return false;
      }
    }
  }
  return true;
}

bool helper(vector<vector<char>> &board, int row, int col) {

  if (row == 9) { // base case
    return true;
  }

  int nextRow = row, nextCol = col + 1;
  if (nextCol == 9) {
    nextRow = row + 1;
    nextCol = 0;
  }

  if (board[row][col] != '.') {
    return helper(board, nextRow, nextCol);
  }

  // place the digit
  for (char dig = '1'; dig <= '9'; dig++) {
    if (isSafe(board, row, col, dig)) {
      board[row][col] = dig;
      if (helper(board, nextRow, nextCol)) {
        return true;
      }
      board[row][col] = '.'; // backtracking
    }
  }
  return false;
}

bool solveSudoku(vector<vector<char>> &board) {
  return helper(board, 0, 0);
}

int main() {
  vector<vector<char>> grid = {
      {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
      {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
      {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
      {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
      {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
      {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
      {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
      {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
      {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

  cout << "your original sudoku board is like: " << endl;
  for (auto row : grid) {
    for (char cell : row) {
      cout << cell << "   ";
    }
    cout << endl;
  }
  cout << endl;

  if (solveSudoku(grid)) {
    cout << "solved sudoku board is like: " << endl;
    for (auto row : grid) {
      for (char cell : row) {
        cout << cell << "   ";
      }
      cout << endl;
    }
    cout << endl;
  } else {
    cout << "solution not possible!" << endl;
  }

  return 0;
}

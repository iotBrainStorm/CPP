/*
=> generally queens are attacking to each other vertically, horizontally and diagonally
=> so we need to find out such places so that n number of queens are placed in n rows without attack each other
=> n queens = n rows (since matrix is n x n)

ex1:
how many queens you want to place (atleast 4): 4
Possible solutions: 2
your chess board looks like:
.  Q  .  .
.  .  .  Q
Q  .  .  .
.  .  Q  .

.  .  Q  .
Q  .  .  .
.  .  .  Q
.  Q  .  .

ex2:
how many queens you want to place (atleast 4): 5
Possible solutions: 10
your chess board looks like:
Q  .  .  .  .
.  .  Q  .  .
.  .  .  .  Q
.  Q  .  .  .
.  .  .  Q  .

Q  .  .  .  .
.  .  .  Q  .
.  Q  .  .  .
.  .  .  .  Q
.  .  Q  .  .

.  Q  .  .  .
.  .  .  Q  .
Q  .  .  .  .
.  .  Q  .  .
.  .  .  .  Q

.  Q  .  .  .
.  .  .  .  Q
.  .  Q  .  .
Q  .  .  .  .
.  .  .  Q  .

.  .  Q  .  .
Q  .  .  .  .
.  .  .  Q  .
.  Q  .  .  .
.  .  .  .  Q

.  .  Q  .  .
.  .  .  .  Q
.  Q  .  .  .
.  .  .  Q  .
Q  .  .  .  .

.  .  .  Q  .
Q  .  .  .  .
.  .  Q  .  .
.  .  .  .  Q
.  Q  .  .  .

.  .  .  Q  .
.  Q  .  .  .
.  .  .  .  Q
.  .  Q  .  .
Q  .  .  .  .

.  .  .  .  Q
.  Q  .  .  .
.  .  .  Q  .
Q  .  .  .  .
.  .  Q  .  .

.  .  .  .  Q
.  .  Q  .  .
Q  .  .  .  .
.  .  .  Q  .
.  Q  .  .  .

 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n) {
  // horizontally
  for (int i = 0; i < n; i++) {
    if (board[row][i] == 'Q') {
      return false;
    }
  }

  // vertically
  for (int j = 0; j < n; j++) {
    if (board[j][col] == 'Q') {
      return false;
    }
  }

  // left diagonally
  for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
    if (board[i][j] == 'Q') {
      return false;
    }
  }

  // right diagonally
  for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
    if (board[i][j] == 'Q') {
      return false;
    }
  }

  return true;
}

void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans) {

  if (row == n) { // base case
    ans.push_back({board});
    return;
  }

  for (int j = 0; j < n; j++) {
    if (isSafe(board, row, j, n)) {
      board[row][j] = 'Q';
      nQueens(board, row + 1, n, ans);
      board[row][j] = '.'; // backtracking
    }
  }
}

vector<vector<string>> solveNQueens(int n) {
  vector<string> board(n, string(n, '.')); // set all the cell value '.' by default
  vector<vector<string>> ans;
  nQueens(board, 0, n, ans);
  return ans;
}

int main() {
  int queens;
  vector<vector<string>> result;
  cout << "how many queens you want to place (atleast 4): ";
  cin >> queens;

  result = solveNQueens(queens);

  // print the chess board
  cout << "Possible solutions: " << result.size() << endl;
  cout << "your chess board looks like: " << endl;
  for (auto board : result) {
    for (auto row : board) {
      for (char cell : row) {
        cout << cell << "  ";
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}

/*
 * here we calculate the total diagonals sum
 * such matrix must be a square matrix, means rows = cols = n
 * primary diagonal = top left to button right => cells: (0, 0), (1, 1), (2, 2), (3, 3) ...
 * secondary diagonal = button left to top right => cells: (0, 3), (1, 2), (2, 1), (3, 0) ...
 * ans = primary diagonal sum + secondary diagonal sum
 */

#include <iostream>
using namespace std;

int diagonalSum(int matrix[][4], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {   // i => cols
    for (int j = 0; j < n; j++) { // j => rows
      if (i == j) {
        sum += matrix[i][j]; // for primary diagonal => cells: (0, 0), (1, 1), (2, 2), (3, 3) ...
      } else if (j == n - 1 - i) {
        sum += matrix[i][j]; // for secondary diagonal => cells: (0, 3), (1, 2), (2, 1), (3, 0) ...
      }
    }
  }
  return sum;
}

int main() {
  int matrix[4][4];
  int rows = 4;
  int cols = 4;

  // input
  cout << "please enter all the elements one by one" << endl;
  for (int i = 0; i < rows; i++) {   // i => rows
    for (int j = 0; j < cols; j++) { // j => cols
      cin >> matrix[i][j];
    }
    cout << endl;
  }

  // output
  cout << "your original matrix is: " << endl;
  for (int i = 0; i < rows; i++) {   // i => rows
    for (int j = 0; j < cols; j++) { // j => cols
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  cout << "diagonal sum is: ";
  cout << diagonalSum(matrix, rows) << endl;

  return 0;
}
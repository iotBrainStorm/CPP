#include <iostream>
using namespace std;

int maxRowSum(int matrix[][3], int rows, int cols) { // matrix[][3] => mention cols is mandatory
  int maxSum = INT32_MIN;
  for (int i = 0; i < rows; i++) {
    int rowSum = 0;
    for (int j = 0; j < cols; j++) {
      rowSum += matrix[i][j];
    }
    maxSum = max(maxSum, rowSum);
  }
  return maxSum;
}

int main() {
  int matrix[4][3];
  int rows = 4;
  int cols = 3;

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

  cout << "maximum row sum is: ";
  cout << maxRowSum(matrix, rows, cols) << endl;

  return 0;
}
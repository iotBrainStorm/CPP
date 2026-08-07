#include <iostream>
using namespace std;

int maxColSum(int matrix[][3], int rows, int cols) { // matrix[][3] => mention cols is mandatory
  int maxSum = INT32_MIN;
  for (int i = 0; i < cols; i++) { // i => cols
    int colSum = 0;
    for (int j = 0; j < rows; j++) { // j => rows
      colSum += matrix[j][i];        // this is important
    }
    maxSum = max(maxSum, colSum);
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

  cout << "maximum col sum is: ";
  cout << maxColSum(matrix, rows, cols) << endl;

  return 0;
}
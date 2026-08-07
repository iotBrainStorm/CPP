#include <iostream>
using namespace std;

pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int key) { // matrix[][3] => mention cols is mandatory
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == key) {
        return {i, j};
      }
    }
  }
  return {-1, -1};
}

int main() {
  int matrix[4][3];
  int rows = 4;
  int cols = 3;
  int key;
  pair<int, int> cell;

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

  // location
  cout << "please enter your key: ";
  cin >> key;
  cell = linearSearch(matrix, rows, cols, key);
  cout << key << " is found at => " << "row: " << cell.first << " col: " << cell.second << endl;

  return 0;
}
#include <iostream>
using namespace std;

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
  for (int i = 0; i < rows; i++) {   // i => rows
    for (int j = 0; j < cols; j++) { // j => cols
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
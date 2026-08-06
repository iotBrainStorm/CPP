#include <iostream>
using namespace std;

int main() {
  int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
  int rows = 4;
  int cols = 3;

  cout << matrix[2][1] << endl; // row 2, col 1 => 8

  matrix[2][1] = 18;
  cout << matrix[2][1] << endl; // row 2, col 1 => 18
  return 0;
}
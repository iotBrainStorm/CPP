/*
 * here we print m x n order matrix in spiral form
 * first => top row, second => right column, third => bottom row, fourth => left column
 * above process be continued for outer most boundary, then inner boundary, then inner boundary again, and so on ...
 * row => m, col => n
 * ex =>
your original matrix is:
10 23 15 57
10 11 16 20
23 20 34 60
18 20 22 33
89 34 15 97
your spiral form matrix is like: 10 23 15 57 20 60 33 97 15 34 89 18 23 10 11 16 34 22 20 20
 */

#include <iostream>
#include <vector>
using namespace std;

vector<int> printSpiral(vector<vector<int>> &mat) {
  int m = mat.size(), n = mat[0].size();
  int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
  vector<int> result;
  while (srow <= erow && scol <= ecol) { // equal is used for odd order matrix
    // top
    for (int j = scol; j <= ecol; j++) {
      result.push_back(mat[srow][j]);
    }

    // right
    for (int i = srow + 1; i <= erow; i++) {
      result.push_back(mat[i][ecol]);
    }

    // bottom
    for (int j = ecol - 1; j >= scol; j--) {
      if (srow == erow) {
        break; // avoid to print repetition for odd no of rows
      }
      result.push_back(mat[erow][j]);
    }

    // left
    for (int i = erow - 1; i >= srow + 1; i--) {
      if (scol == ecol) {
        break; // avoid to print repetition for odd no of cols
      }
      result.push_back(mat[i][scol]);
    }
    srow++;
    ecol--;
    erow--;
    scol++;
  }
  return result;
}

int main() {
  vector<vector<int>> mat = {{10, 23, 15, 57}, {10, 11, 16, 20}, {23, 20, 34, 60}, {18, 20, 22, 33}, {89, 34, 15, 97}};
  vector<int> ans;

  cout << "your original matrix is: " << endl;
  for (int i = 0; i < mat.size(); i++) {
    for (int j = 0; j < mat[i].size(); j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  ans = printSpiral(mat);
  cout << "your spiral form matrix is like: ";
  for (int val : ans) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
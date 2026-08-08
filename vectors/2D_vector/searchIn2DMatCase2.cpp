/*
 * every row of this matrix is non-decreasing order (next element is equal or greater)
 * every col of this matrix is non-decreasing order also (next element is equal or greater)
 * ex: matrix[5][5] = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23,26, 30}}
 * row => m, col => n
 * here we will use binary search

PS C:\Users\mrina\Documents\CPP\vectors\2D_vector> ./a.exe
your original matrix is:
1 4 7 11 15
2 5 8 12 19
3 6 9 16 22
10 13 14 17 24
18 21 23 26 30
please enter your target: 5
5 is found
PS C:\Users\mrina\Documents\CPP\vectors\2D_vector> ./a.exe
your original matrix is:
1 4 7 11 15
2 5 8 12 19
3 6 9 16 22
10 13 14 17 24
18 21 23 26 30
please enter your target: 25
25 isn't found

 */

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target) {
  int m = matrix.size();    // number of rows
  int n = matrix[0].size(); // number of cols
  int r = 0, c = n - 1;     // we assume mid => right hand top corner
  while (r < m && c >= 0) { // r moves => downward, c moves => left
    if (target == matrix[r][c]) {
      return true;
    } else if (target < matrix[r][c]) {
      c--; // moves to left
    } else {
      r++; // moves to downward
    }
  }
  return false;
}

int main() {
  vector<vector<int>> mat = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
  int target;

  cout << "your original matrix is: " << endl;
  for (int i = 0; i < mat.size(); i++) {
    for (int j = 0; j < mat[i].size(); j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  cout << "please enter your target: ";
  cin >> target;

  if (searchMatrix(mat, target)) {
    cout << target << " is found" << endl;
  } else {
    cout << target << " isn't found" << endl;
  }

  return 0;
}
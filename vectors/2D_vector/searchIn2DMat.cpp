/*
 * every row of this matrix is non-decreasing order (next element is equal or greater)
 * first integer of any row is greater than last integer of the previous row
 * ex: matrix[3][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 20, 34, 60}}
 * row => m, col => n
 * here we will use binary search
 */

#include <iostream>
#include <vector>
using namespace std;

bool searchInRow(vector<vector<int>> &matrix, int target, int row) {
  int rowLength = matrix[row].size();
  int st = 0, end = rowLength - 1;
  while (st <= end) {
    int mid = ((end - st) / 2) + st;
    if (target == matrix[row][mid]) {
      return true;
    } else if (target > matrix[row][mid]) {
      st = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target) {
  // binary search on total rows
  int m = matrix.size();    // number of rows
  int n = matrix[0].size(); // number of cols
  int startRow = 0, endRow = m - 1;
  while (startRow <= endRow) {
    int midRow = ((endRow - startRow) / 2) + startRow;
    if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1]) {
      // this is the target row => binary search on this particular row
      return searchInRow(matrix, target, midRow);

    } else if (target >= matrix[midRow][n - 1]) {
      // move downward
      startRow = midRow + 1;
    } else {
      // move upward
      endRow = midRow - 1;
    }
  }
  return false;
}

int main() {
  vector<vector<int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 20, 34, 60}};
  int target;

  // rows => mat.size();
  // cols (for ith row) => mat[i].size();

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
/*
 * we have a square matrix (n x n), which elements are lies between 1 to n^2
 * but there is a repeated value (a) between 1 to n^2, and there is also a missing value (b) between 1 to n^2
 * we need to find out a and b
 * formula of b = expected sum + a - actual sum
 * expected sum between 1 to n^2 = n * (n + 1) / 2
 * ex =>
your original square matrix is like:
1 2 3 4
5 6 7 8
9 16 11 12
13 14 15 16
repeated value (a) is: 16
missing value (b) is: 10

 */

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid) {
  vector<int> ans;
  unordered_set<int> s;
  int n = grid.size();
  int a, b;
  int expSum = 0, actualSum = 0;

  // find out a
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      actualSum += grid[i][j];

      if (s.find(grid[i][j]) != s.end()) {
        a = grid[i][j];
        ans.push_back(a);
      }
      s.insert(grid[i][j]);
    }
  }

  // find out b
  expSum = (n * n) * (n * n + 1) / 2;
  b = expSum + a - actualSum;
  ans.push_back(b);

  return ans;
}

int main() {
  vector<vector<int>> grid = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 16, 11, 12}, {13, 14, 15, 16}}; // repeated(a) => 16, missing(b) => 10
  vector<int> ans;

  cout << "your original square matrix is like: " << endl;
  for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid[i].size(); j++) {
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }

  ans = findMissingAndRepeatedValues(grid);
  cout << "repeated value (a) is: " << ans[0] << endl;
  cout << "missing value (b) is: " << ans[1] << endl;

  return 0;
}
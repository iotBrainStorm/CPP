/*
ex1:
your original maze is like:
1  0  0  0
1  1  0  1
1  1  0  0
0  1  1  1
your possible paths (2) are:
DDRDRR
DRDDRR

ex2:
your original maze is like:
0  0  0  0
1  1  0  1
1  1  0  0
0  1  1  1
your possible paths (0) are:

ex3:
your original maze is like:
1  1  0  0
1  1  0  1
1  1  1  0
0  1  1  1
your possible paths (8) are:
DDRDRR
DDRRDR
DRDDRR
DRDRDR
RDDDRR
RDDRDR
RDLDRDRR
RDLDRRDR
 */

#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat, int row, int col, string path, vector<string> &ans, vector<vector<bool>> &visit) {

  int n = mat.size();
  // boundary condition
  if (row < 0 || col < 0 || row >= n || col >= n || mat[row][col] == 0 || visit[row][col] == true) {
    return;
  }

  // base case
  if (row == n - 1 && col == n - 1) {
    ans.push_back(path);
    return;
  }

  visit[row][col] = true; // to store the cell is visited or not

  helper(mat, row + 1, col, path + "D", ans, visit); // down call
  helper(mat, row - 1, col, path + "U", ans, visit); // up call
  helper(mat, row, col - 1, path + "L", ans, visit); // left call
  helper(mat, row, col + 1, path + "R", ans, visit); // right call

  visit[row][col] = false; // backtrack

  /*
  here space optimization is possible
  we can assign any value to "mat[row][col] = -1", instead of "visit[row][col] = true" to memorize the path
  but for backtracking we must assign "mat[row][col] = 1" instead of "visit[row][col] = false" for backtracking
  */
}

vector<string> findPath(vector<vector<int>> &mat) {
  int n = mat.size();
  vector<string> ans;
  string path = "";
  vector<vector<bool>> visit(n, vector<bool>(n, false)); // to track the visited path

  helper(mat, 0, 0, path, ans, visit);
  return ans;
}

int main() {
  vector<vector<int>> mat = {{1, 1, 0, 0}, {1, 1, 0, 1}, {1, 1, 1, 0}, {0, 1, 1, 1}};
  vector<string> ans = findPath(mat);

  cout << "your original maze is like: " << endl;
  for (auto row : mat) {
    for (auto cell : row) {
      cout << cell << "  ";
    }
    cout << endl;
  }

  findPath(mat);

  cout << "your possible paths (" << ans.size() << ") are:" << endl;
  for (auto paths : ans) {
    cout << paths << endl;
  }

  return 0;
}

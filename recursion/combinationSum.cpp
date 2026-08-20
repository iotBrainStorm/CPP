/*
ex1:
your original array is like: [  2  3  5  4  2  ]
please enter your target value: 8
total possible solutions: 8
Solutions are:
  [ 2 3 3 ]
  [ 2 4 2 ]
  [ 2 2 2 2 ]
  [ 2 2 4 ]
  [ 3 5 ]
  [ 3 3 2 ]
  [ 4 2 2 ]
  [ 4 4 ]

ex2:
your original array is like: [  2  2  2  2  ]
please enter your target value: 8
total possible solutions: 1
Solutions are:
  [ 2 2 2 2 ]

 */

#include <iostream>
#include <set>
#include <vector>
using namespace std;

void getCombinations(vector<int> &arr, int idx, int target, vector<vector<int>> &ans, vector<int> &combinations, set<vector<int>> &s) {
  // base case
  if (idx == arr.size() || target < 0) {
    return;
  }
  if (target == 0) {
    if (s.find(combinations) == s.end()) {
      ans.push_back({combinations});
      s.insert(combinations);
    }
    return;
  }

  // single,  add the number single time and others
  combinations.push_back(arr[idx]);
  getCombinations(arr, idx + 1, target - arr[idx], ans, combinations, s);

  // multiple, add the number multiple times itself
  getCombinations(arr, idx, target - arr[idx], ans, combinations, s);

  // exclusion, backtracking
  combinations.pop_back();
  getCombinations(arr, idx + 1, target, ans, combinations, s);
}

vector<vector<int>> combinationSum(vector<int> &arr, int target) {
  vector<vector<int>> ans;
  vector<int> combinations;
  set<vector<int>> s; // to store unique combinations
  getCombinations(arr, 0, target, ans, combinations, s);
  return ans;
}

int main() {
  vector<int> mat = {2, 3, 5, 4, 2};
  vector<vector<int>> result;
  int tar;

  cout << "your original array is like: [  ";
  for (auto val : mat) {
    cout << val << "  ";
  }
  cout << "]" << endl;

  cout << "please enter your target value: ";
  cin >> tar;

  result = combinationSum(mat, tar);

  cout << "total possible solutions: " << result.size() << endl;
  cout << "Solutions are:" << endl;
  for (auto row : result) {
    cout << "  [ ";
    for (int cell : row) {
      cout << cell << " ";
    }
    cout << "]" << endl;
  }
  return 0;
}

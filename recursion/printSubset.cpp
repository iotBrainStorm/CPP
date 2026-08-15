/*
your original array is: [ 1 2 3 4 ]
all the possible subsets (16) are:
[ 1 2 3 4 ]
[ 1 2 3 ]
[ 1 2 4 ]
[ 1 2 ]
[ 1 3 4 ]
[ 1 3 ]
[ 1 4 ]
[ 1 ]
[ 2 3 4 ]
[ 2 3 ]
[ 2 4 ]
[ 2 ]
[ 3 4 ]
[ 3 ]
[ 4 ]
[ ]
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void findSubsets(vector<int> &arr, vector<int> &current, vector<vector<int>> &allSubsets, int idx) {
  if (idx == arr.size()) {
    allSubsets.push_back(current);
    return;
  }
  // INCLUDE current element
  current.push_back(arr[idx]);
  findSubsets(arr, current, allSubsets, idx + 1);

  // BACKTRACK
  current.pop_back();

  // EXCLUDE current element
  findSubsets(arr, current, allSubsets, idx + 1);
}

int main() {

  vector<int> arr = {1, 2, 3, 4};
  vector<int> current;
  vector<vector<int>> allSubsets;

  // print the original array
  cout << "your original array is: [ ";
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << "]" << endl;

  findSubsets(arr, current, allSubsets, 0);

  // print all subsets
  cout << "all the possible subsets (" << allSubsets.size() << ") are: " << endl;
  for (auto subset : allSubsets) {
    cout << "[ ";
    for (auto value : subset) {
      cout << value << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}

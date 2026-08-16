/*
your original array is: [ 1 2 2 ]
all the possible subsets (8) are:
[ 1 2 2 ]
[ 1 2 ]
[ 1 2 ] => duplicate (we need to skip this subset)
[ 1 ]
[ 2 2 ]
[ 2 ]
[ 2 ]   => duplicate (we need to skip this subset)
[ ]

step1 => duplicate elements must be situated one by one at i, (i + 1), (i + 2) ...
step2 => for this we need to sort the array first
step3 => once exclude any duplicate element then don't include again

ex1:
your original array is: [ 1 2 2 ]
your sorted array is: [ 1 2 2 ]
all the possible subsets (6) are:
[ 1 2 2 ]
[ 1 2 ]
[ 1 ]
[ 2 2 ]
[ 2 ]
[ ]

ex2:
your original array is: [ 2 1 2 ]
your sorted array is: [ 1 2 2 ]
all the possible subsets (6) are:
[ 1 2 2 ]
[ 1 2 ]
[ 1 ]
[ 2 2 ]
[ 2 ]
[ ]

ex3:
your original array is: [ 2 2 2 ]
your sorted array is: [ 2 2 2 ]
all the possible subsets (4) are:
[ 2 2 2 ]
[ 2 2 ]
[ 2 ]
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
  while (idx + 1 < arr.size() && arr[idx + 1] == arr[idx]) { // skipping duplicate
    idx++;
  }
  findSubsets(arr, current, allSubsets, idx + 1);
}

int main() {

  vector<int> arr = {1, 2, 2};
  vector<int> current;
  vector<vector<int>> allSubsets;

  // print the original array
  cout << "your original array is: [ ";
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << "]" << endl;

  sort(arr.begin(), arr.end());
  cout << "your sorted array is: [ ";
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

/*
your original array is: [ 1 2 3 ]
all the possible permutation (6) are:
[ 1 2 3 ]
[ 1 3 2 ]
[ 2 1 3 ]
[ 2 3 1 ]
[ 3 2 1 ]
[ 3 1 2 ]

debug =>
your original array is: [ 1 2 3 ]
your modified array (idx = 0, i = 0) is: [ 1 2 3 ] => swap at index (0, 0)
your modified array (idx = 1, i = 1) is: [ 1 2 3 ] => swap at index (1, 1)
your modified array (idx = 2, i = 2) is: [ 1 2 3 ] => swap at index (2, 2)
your ans array is: [ 1 2 3 ]
your modified array (idx = 2, i = 2) is: [ 1 2 3 ] => backtrack (2, 2)
your modified array (idx = 1, i = 1) is: [ 1 2 3 ] => backtrack (1, 1)
your modified array (idx = 1, i = 2) is: [ 1 3 2 ] => swap at index (1, 2)
your modified array (idx = 2, i = 2) is: [ 1 3 2 ] => swap at index (2, 2)
your ans array is: [ 1 3 2 ]
your modified array (idx = 2, i = 2) is: [ 1 3 2 ] => backtrack (2, 2)
your modified array (idx = 1, i = 2) is: [ 1 2 3 ] => backtrack (1, 2)
your modified array (idx = 0, i = 0) is: [ 1 2 3 ] => backtrack (0, 0)
your modified array (idx = 0, i = 1) is: [ 2 1 3 ] => swap at index (0, 1)
your modified array (idx = 1, i = 1) is: [ 2 1 3 ] => swap at index (1, 1)
your modified array (idx = 2, i = 2) is: [ 2 1 3 ] => swap at index (2, 2)
your ans array is: [ 2 1 3 ]
your modified array (idx = 2, i = 2) is: [ 2 1 3 ] => backtrack (2, 2)
your modified array (idx = 1, i = 1) is: [ 2 1 3 ] => backtrack (1, 1)
your modified array (idx = 1, i = 2) is: [ 2 3 1 ] => swap at index (1, 2)
your modified array (idx = 2, i = 2) is: [ 2 3 1 ] => swap at index (2, 2)
your ans array is: [ 2 3 1 ]
your modified array (idx = 2, i = 2) is: [ 2 3 1 ] => backtrack (2, 2)
your modified array (idx = 1, i = 2) is: [ 2 1 3 ] => backtrack (1, 2)
your modified array (idx = 0, i = 1) is: [ 1 2 3 ] => backtrack (0, 1)
your modified array (idx = 0, i = 2) is: [ 3 2 1 ] => swap at index (0, 2)
your modified array (idx = 1, i = 1) is: [ 3 2 1 ] => swap at index (1, 1)
your modified array (idx = 2, i = 2) is: [ 3 2 1 ] => swap at index (2, 2)
your ans array is: [ 3 2 1 ]
your modified array (idx = 2, i = 2) is: [ 3 2 1 ] => backtrack (2, 2)
your modified array (idx = 1, i = 1) is: [ 3 2 1 ] => backtrack (1, 1)
your modified array (idx = 1, i = 2) is: [ 3 1 2 ] => swap at index (1, 2)
your modified array (idx = 2, i = 2) is: [ 3 1 2 ] => swap at index (2, 2)
your ans array is: [ 3 1 2 ]
your modified array (idx = 2, i = 2) is: [ 3 1 2 ] => backtrack (2, 2)
your modified array (idx = 1, i = 2) is: [ 3 2 1 ] => backtrack (1, 2)
your modified array (idx = 0, i = 2) is: [ 1 2 3 ] => backtrack (0, 2)
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void getPermutation(vector<int> &arr, vector<vector<int>> &ans, int idx) {
  if (idx == arr.size()) {
    // // for debug
    // cout << "your ans array is: [ ";
    // for (auto val : arr) {
    //   cout << val << " ";
    // }
    // cout << "]" << endl;

    ans.push_back({arr});
    return;
  }

  for (int i = idx; i < arr.size(); i++) {
    swap(arr[idx], arr[i]);

    // // for debug
    // cout << "your modified array (idx = " << idx << ", i = " << i << ") is: [ ";
    // for (auto val : arr) {
    //   cout << val << " ";
    // }
    // cout << "] => swap at index (" << idx << ", " << i << ")" << endl;

    getPermutation(arr, ans, idx + 1);
    swap(arr[idx], arr[i]);

    // // for debug
    // cout << "your modified array (idx = " << idx << ", i = " << i << ") is: [ ";
    // for (auto val : arr) {
    //   cout << val << " ";
    // }
    // cout << "] => backtrack (" << idx << ", " << i << ")" << endl;
  }
}

int main() {

  vector<int> arr = {1, 2, 3};
  vector<vector<int>> ans;

  // print the original array
  cout << "your original array is: [ ";
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << "]" << endl;

  getPermutation(arr, ans, 0);

  // print all subsets
  cout << "all the possible permutation (" << ans.size() << ") are: " << endl;
  for (auto subset : ans) {
    cout << "[ ";
    for (auto value : subset) {
      cout << value << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}

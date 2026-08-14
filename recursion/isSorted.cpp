/*
your original array is like: 1 2 3 4 5 6 7 8 9 0
array isn't sorted

your original array is like: -2 -1 2 3 4 5 6 7 8 9
array is sorted
 */

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &arr, int n) {
  if (n == 0 || n == 1) {
    return true;
  }
  return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
}

int main() {
  vector<int> arr = {-2, -1, 2, 3, 4, 5, 6, 7, 8, 9};
  cout << "your original array is like: ";
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << endl;

  if (isSorted(arr, arr.size())) {
    cout << "array is sorted" << endl;
  } else {
    cout << "array isn't sorted" << endl;
  }

  return 0;
}
/*
your original array is like: -2 -1 2 0 -4 5 16 7 8 19 11 -45 1
after sorted your array is like: -45 -4 -2 -1 0 1 2 5 7 8 11 16 19
please enter your target: 0
target found at index: 4

your original array is like: -2 -1 2 0 -4 5 16 7 8 19 11 -45 1
after sorted your array is like: -45 -4 -2 -1 0 1 2 5 7 8 11 16 19
please enter your target: -11
target not found

your original array is like: -2 -1 2 0 -4 5 16 7 8 19 11 -45 1
after sorted your array is like: -45 -4 -2 -1 0 1 2 5 7 8 11 16 19
please enter your target: 19
target found at index: 12
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int tar, int st, int end) {
  if (st <= end) {
    int mid = st + (end - st) / 2;
    if (arr[mid] == tar) {
      return mid;
    }
    if (arr[mid] <= tar) {
      return binarySearch(arr, tar, mid + 1, end);
    } else {
      return binarySearch(arr, tar, st, mid - 1);
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {-2, -1, 2, 0, -4, 5, 16, 7, 8, 19, 11, -45, 1};
  int target;
  cout << "your original array is like: ";
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << endl;

  sort(arr.begin(), arr.end());

  cout << "after sorted your array is like: ";
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << endl;

  cout << "please enter your target: ";
  cin >> target;

  int idx = binarySearch(arr, target, 0, arr.size() - 1);

  if (idx == -1) {
    cout << "target not found" << endl;
  } else {
    cout << "target found at index: " << idx << endl;
  }

  return 0;
}
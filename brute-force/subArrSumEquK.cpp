/*
Your original array is like: [-1, 0, 3, -4, 6, 2, 1, 9, 7, -9, 10]
Please enter your target: 12
target (12) found 2 times

here,
sub arr1 => 3 - 4 + 6 + 2 + 1 + 9 + 7 - 9 + 10 = 12
sub arr2 => 2 + 1 + 9 = 12
*/

#include <iostream>
#include <vector>
using namespace std;

int subArrSum(vector<int> &arr, int tar) {
  int n = arr.size();
  int count = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += arr[j];
      if (sum == tar) {
        count++;
      }
    }
  }
  return count;
}

int main() {
  vector<int> arr = {-1, 0, 3, -4, 6, 2, 1, 9, 7, -9, 10};
  int target;
  int count;

  cout << "Your original array is like: ";
  cout << "[";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
    if (i < arr.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;
  cout << "please enter your target: ";
  cin >> target;

  count = subArrSum(arr, target);
  cout << "target (" << target << ") " << "found for " << count << " times" << endl;

  return 0;
}

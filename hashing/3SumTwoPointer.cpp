/*
 * 3 sum means => sum will be zero for three elements
 * return the combinations of three elements
 * ex =>
Your original array is like (before sorting): [-1, 0, 3, -4, 6, 2, 1, 9, 7, -9]
Your original array is like (after sorting): [-9, -4, -1, 0, 1, 2, 3, 6, 7, 9]
Three sum found for values:
[-9, 0, 9]
[-9, 2, 7]
[-9, 3, 6]
[-4, 1, 3]
[-1, 0, 1]

*/

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr) {
  sort(arr.begin(), arr.end()); // we first sort the array, this is important
  int n = arr.size();
  vector<vector<int>> ans; // we will return 2d vector of size three => triplet

  for (int i = 0; i < n; i++) { // i => first number
    if (i > 0 && arr[i] == arr[i + 1]) {
      continue; // skip repeated value of i
    }

    int j = i + 1, k = n - 1; // j => second number, k=> third number
    while (j < k) {
      int sum = arr[i] + arr[j] + arr[k];
      if (sum < 0) {
        j++;
      } else if (sum > 0) {
        k--;
      } else { // sum = 0, this is needed
        ans.push_back({arr[i], arr[j], arr[k]});
        j++;
        k--;
        // more optimization
        while (j < k && arr[j] == arr[j - 1]) { // skip the repeated value of j
          j++;
        }
      }
    }
  }

  return ans;
}

int main() {
  vector<int> arr = {-1, 0, 3, -4, 6, 2, 1, 9, 7, -9};
  vector<vector<int>> ans;

  cout << "Your original array is like (before sorting): ";
  cout << "[";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
    if (i < arr.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;

  ans = threeSum(arr);

  cout << "Your original array is like (after sorting): ";
  cout << "[";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
    if (i < arr.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;

  cout << "Three sum found for values:" << endl;
  for (int i = 0; i < ans.size(); i++) {
    cout << "[";
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j];
      if (j != ans[i].size() - 1) {
        cout << ", ";
      }
    }
    cout << "]" << endl;
  }

  return 0;
}

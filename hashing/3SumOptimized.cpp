/*
 * 3 sum means => sum will be zero for three elements
 * return the combinations of three elements
 * ex =>
Your original array is like: [-1, 0, 3, -4, 6, 2, 1, 9, 7, -9]
Three sum found for values:
[-1, 0, 1]
[-9, 0, 9]
[-4, 1, 3]
[-9, 3, 6]
[-9, 2, 7]

*/

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr) {
  int n = arr.size();
  vector<vector<int>> ans; // we will return 2d vector of size three => triplet
  set<vector<int>> s;      // here we choose a set to store unique value of triplet

  for (int i = 0; i < n; i++) {
    int target = -arr[i];
    set<int> s;
    for (int j = i + 1; j < n; j++) {
      int third = target - arr[j];

      if (s.find(third) != s.end()) {
        vector<int> trip = {arr[i], arr[j], third};
        sort(trip.begin(), trip.end());
        ans.push_back(trip);
      }
      s.insert(arr[j]);
    }
  }

  return ans;
}

int main() {
  vector<int> arr = {-1, 0, 3, -4, 6, 2, 1, 9, 7, -9};
  vector<vector<int>> ans;

  cout << "Your original array is like: ";
  cout << "[";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
    if (i < arr.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;

  ans = threeSum(arr);

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

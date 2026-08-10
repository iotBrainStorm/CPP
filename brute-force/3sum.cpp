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

  set<vector<int>> s; // here we choose a set to store unique value of triplet

  for (int i = 0; i < n; i++) {         // for first element of triplet
    for (int j = i + 1; j < n; j++) {   // for second element of triplet
      for (int k = j + 1; k < n; k++) { // for third element of triplet
        if (arr[i] + arr[j] + arr[k] == 0) {
          vector<int> triplet = {arr[i], arr[j], arr[k]};
          sort(triplet.begin(), triplet.end()); // here we sorted the triplet to store it uniquely, means no repetition
          if (s.find(triplet) == s.end()) {     // check it is already exist or not
            s.insert(triplet);                  // first insert it into a set uniquely
            ans.push_back(triplet);             // then insert it into a vector, so that only one unique combination be stored
          }
        }
      }
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

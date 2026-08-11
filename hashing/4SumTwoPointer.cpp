/*
 * 4 sum means => any target will be equal to the sum of any four elements
 * arr[i] + arr[j] + arr[p] + arr[q] = target, where i != j != p != q
 * return the combinations of four elements
 * ex =>
Your original array is like (before sorting): [-1, 0, 3, -4, 6, 2, 1, 9, 7, -9]
please enter your target: 6
Your original array is like (after sorting): [-9, -4, -1, 0, 1, 2, 3, 6, 7, 9]
target (6) matched for four sum:
[-9, -1, 7, 9]
[-9, 0, 6, 9]
[-9, 2, 6, 7]
[-4, -1, 2, 9]
[-4, 0, 1, 9]
[-4, 0, 3, 7]
[-4, 1, 2, 7]
[-4, 1, 3, 6]
[-1, 0, 1, 6]
[0, 1, 2, 3]

*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> fourSum(vector<int> &arr, int tar) {
  sort(arr.begin(), arr.end()); // we first sort the array, this is important
  int n = arr.size();
  vector<vector<int>> ans; // we will return 2d vector

  for (int i = 0; i < n; i++) {

    if (i > 0 && arr[i] == arr[i - 1]) {
      continue;
    }

    for (int j = i + 1; j < n;) {
      int p = j + 1;
      int q = n - 1;
      while (p < q) {
        long long sum = (long long)arr[i] + (long long)arr[j] + (long long)arr[p] + (long long)arr[q];
        if (sum < tar) {
          p++;
        } else if (sum > tar) {
          q--;
        } else {
          ans.push_back({arr[i], arr[j], arr[p], arr[q]});
          p++;
          q--;

          while (p < q && arr[p] == arr[p - 1]) {
            p++;
          }
        }
      }

      j++;
      while (j < n && arr[j] == arr[j - 1]) {
        j++;
      }
    }
  }

  return ans;
}

int main() {
  vector<int> arr = {-1, 0, 3, -4, 6, 2, 1, 9, 7, -9};
  vector<vector<int>> ans;
  int target;

  cout << "Your original array is like (before sorting): ";
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

  ans = fourSum(arr, target);

  cout << "Your original array is like (after sorting): ";
  cout << "[";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
    if (i < arr.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;

  cout << "target (" << target << ") " << "matched for four sum:" << endl;
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

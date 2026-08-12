/*
 * subArrSum[i, j] = prefixSum[j] - prefixSum[i - 1]
 * here subArrSum[i, j] is target
 * target = prefixSum[j] - prefixSum[i - 1]
 * prefixSum[i - 1] = prefixSum[j] - target
 * ex =>
Your original array is like: [-1, 0, 3, -4, 6, 2, 1, 9, 7, -9, 10]
please enter your target: 10
target (10) found for 3 times
Subarrays are:
[1, 9]
[2, 1, 9, 7, -9]
[10]
 */

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// int subArrSum(vector<int> &arr, int tar) {
//   int n = arr.size();
//   int count = 0;

//   // calculate prefix sum
//   vector<int> prefixSum(n, 0); // initially set all the element 0
//   prefixSum[0] = arr[0];
//   for (int i = 1; i < n; i++) {
//     prefixSum[i] = prefixSum[i - 1] + arr[i];
//   }

//   // calculate count
//   unordered_map<int, int> m;
//   for (int j = 0; j < n; j++) {
//     if (prefixSum[j] == tar) {
//       count++;
//     }
//     int findVal = prefixSum[j] - tar; // prefixSum[i - 1] = prefixSum[j] - target
//     if (m.find(findVal) != m.end()) {
//       count += m[findVal]; // count will increased to frequency of matched prefixsum
//     }
//     if (m.find(prefixSum[j]) == m.end()) {
//       m[prefixSum[j]] = 0; // to create the key with value 0
//     }
//     m[prefixSum[j]]++; // next increased it
//   }

//   return count;
// }

vector<vector<int>> subArrSum(vector<int> &arr, int tar) {
  int n = arr.size();
  int count = 0;
  vector<vector<int>> result;

  // calculate prefix sum
  vector<int> prefixSum(n, 0); // initially set all the element 0
  prefixSum[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefixSum[i] = prefixSum[i - 1] + arr[i];
  }

  // calculate count
  unordered_map<int, int> m;

  for (int j = 0; j < n; j++) {

    if (prefixSum[j] == tar) {
      vector<int> subarray;
      for (int i = 0; i <= j; i++) {
        subarray.push_back(arr[i]);
      }
      result.push_back(subarray);
    }

    int findVal = prefixSum[j] - tar; // prefixSum[i - 1] = prefixSum[j] - target
    if (m.find(findVal) != m.end()) {
      for (int i = 0; i < j; i++) {
        if (prefixSum[i] == findVal) {
          vector<int> subarray;
          for (int k = i + 1; k <= j; k++) {
            subarray.push_back(arr[k]);
          }
          result.push_back(subarray);
        }
      }
    }

    if (m.find(prefixSum[j]) == m.end()) {
      m[prefixSum[j]] = 0; // to create the key with value 0
    }
    m[prefixSum[j]]++; // next increased it
  }

  return result;
}

int main() {
  vector<int> arr = {-1, 0, 3, -4, 6, 2, 1, 9, 7, -9, 10, 5, 8};
  int target;

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

  vector<vector<int>> result = subArrSum(arr, target);

  cout << "target (" << target << ") found for " << result.size() << " times" << endl;
  cout << "Subarrays are:" << endl;
  for (auto subarray : result) {
    cout << "[";
    for (int i = 0; i < subarray.size(); i++) {
      cout << subarray[i];
      if (i < subarray.size() - 1) {
        cout << ", ";
      }
    }
    cout << "]" << endl;
  }

  return 0;
}

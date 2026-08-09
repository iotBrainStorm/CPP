/*
 * 2 sum means => target element will be equal to sum of two any other element in the array
 * arr = [5, 2, 11, 7, 15], tar = 9
 * here target 9 = 2 + 7
 * so we will return the index of 2 and 7, which is 1 and 3
 * ex =>
your original array is like: 2 5 6 8 1 3 9 7 0
please enter your target: 17
sum found at index: 3(8)  6(9)
 */

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &arr, int tar) {
  unordered_map<int, int> m;
  vector<int> ans;
  for (int i = 0; i < arr.size(); i++) {
    int first = arr[i];
    int second = tar - first;
    if (m.find(second) != m.end()) {
      ans.push_back(m[second]); // push first index from map
      ans.push_back(i);         // push second index
      break;
    }
    m[first] = i;
  }
  return ans;
}

int main() {
  vector<int> arr = {2, 5, 6, 8, 1, 3, 9, 7, 0};
  int target;
  vector<int> ans;

  cout << "your original array is like: ";
  for (int val : arr) {
    cout << val << " ";
  }
  cout << endl;

  cout << "please enter your target: ";
  cin >> target;

  ans = twoSum(arr, target);
  cout << "sum found at index: ";
  for (int idx : ans) {
    cout << idx << "(" << arr[idx] << ")" << "  ";
  }
  cout << endl;

  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(int arr[], int size, int target) {
  vector<int> ans;
  int fromLeft = 0;
  int fromRight = size - 1;
  while (fromLeft < fromRight) {
    int pairSum = arr[fromLeft] + arr[fromRight];
    if (pairSum > target) {
      fromRight--;
    } else if (pairSum < target) {
      fromLeft++;
    } else {
      ans.push_back(arr[fromLeft]);
      ans.push_back(arr[fromRight]);
      return ans;
    }
  }
  return ans;  // if no match found it will return empty vector
}

int main() {
  int size = 5;
  int arr[size];
  int target;

  cout << "please enter 5 numbers in ascending order and target sum" << endl;
  for (int i = 0; i < size; i++) {
    cout << "please enter " << i << " element: ";
    cin >> arr[i];
  }

  cout << "please enter your target sum: ";
  cin >> target;

  cout << "your original array is: [ ";
  for (int i = 0; i < size; i++) {
    cout << arr[i];
    if (i != size - 1) {
      cout << ", ";
    }
  }
  cout << " ]" << endl;

  vector<int> ans = pairSum(arr, size, target);

  cout << "your target sum is: " << target << endl;

  cout << "match found for: ";
  for (int val : ans) {
    cout << val << " ";
  }

  return 0;
}
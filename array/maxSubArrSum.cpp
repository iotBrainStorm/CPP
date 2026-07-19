#include <iostream>
using namespace std;

int main() {
  int size = 5;
  int arr[size];
  int maxSum = INT32_MIN;
  int bestStart = 0;  // start point of max sum array
  int bestEnd = 0;    // end point of max sum array

  cout << "please enter 5 numbers to find out all possible sub-arrays" << endl;
  for (int i = 0; i < size; i++) {
    cout << "please enter " << i << " element: ";
    cin >> arr[i];
  }

  cout << "your original array is: { ";
  for (int i = 0; i < size; i++) {
    cout << arr[i];
    if (i != size - 1) {
      cout << ", ";
    }
  }
  cout << " }";
  cout << endl;

  cout << "all possible sub-arrays are:\n";
  for (int start = 0; start < size; start++) {
    for (int end = start; end < size; end++) {
      cout << "{ ";
      for (int index = start; index <= end; index++) {
        if (index == end) {
          cout << arr[index] << " }";
        } else {
          cout << arr[index] << ", ";
        }
      }
      cout << " ";
    }
    cout << endl;
  }
  cout << endl;

  cout << "maximum sum is: ";
  for (int start = 0; start < size; start++) {
    int currSum = 0;
    for (int end = start; end < size; end++) {
      currSum += arr[end];

      if (currSum > maxSum) {
        maxSum = currSum;   // store max sum
        bestStart = start;  // store max sum start point
        bestEnd = end;      // store max sum end point
      }
    }
  }
  cout << maxSum << endl;

  cout << "Sub-array: { ";
  for (int i = bestStart; i <= bestEnd; i++) {
    cout << arr[i];
    if (i != bestEnd) cout << ", ";
  }
  cout << " }";

  return 0;
}
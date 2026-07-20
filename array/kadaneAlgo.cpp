#include <iostream>
using namespace std;

int main() {
  int size = 5;
  int arr[size];
  int maxSum = INT32_MIN;
  int currSum = 0;

  cout << "please enter 5 numbers to find out all possible sub-arrays" << endl;
  for (int i = 0; i < size; i++) {
    cout << "please enter " << i << " element: ";
    cin >> arr[i];
  }

  cout << "your original array is: [ ";
  for (int i = 0; i < size; i++) {
    cout << arr[i];
    if (i != size - 1) {
      cout << ", ";
    }
  }
  cout << " ]";
  cout << endl;

  cout << "all possible sub-arrays are:\n";
  for (int start = 0; start < size; start++) {
    for (int end = start; end < size; end++) {
      cout << "[ ";
      for (int index = start; index <= end; index++) {
        if (index == end) {
          cout << arr[index] << " ]";
        } else {
          cout << arr[index] << ", ";
        }
      }
      cout << " ";
    }
    cout << endl;
  }
  cout << endl;

  cout << "maximum sum by Kadane's Algorithm is: ";
  for (int index = 0; index < size; index++) {
    currSum += arr[index];

    if (currSum > maxSum) {
      maxSum = currSum;  // store max sum
    }
    if (currSum < 0) {
      currSum = 0;
    }
  }
  cout << maxSum << endl;

  return 0;
}
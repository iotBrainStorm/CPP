#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int binarySearchPeakValue(vector<float>& vec, float target) {
  int st = 0;
  int end = vec.size() - 1;
  while (st <= end) {
    int mid = ((end - st) / 2) + st;

    if (vec[mid - 1] < vec[mid] && vec[mid] > vec[mid + 1]) {
      return mid;
    } else if (vec[mid] > vec[mid - 1]) {  // is increasing slope?
      st = mid + 1;
    } else {  // otherwise decreasing slope
      end = mid - 1;
    }
  }
  return -1;
}

int main() {
  vector<float> numbers;

  float number;
  float target;
  int vectorSize;
  cout << "please enter the length of your mountain array to find peak index "
          "(minimum size will be 3): ";
  cin >> vectorSize;

  cout << "please enter the numbers one by one in mountain order" << endl;

  numbers.clear();
  for (int i = 0; i < vectorSize; i++) {
    cin >> number;
    numbers.push_back(number);
  }

  cout << "your array is: ";
  for (float val : numbers) {
    cout << val << " ";
  }
  cout << endl;

  cout << "peak found at index: " << binarySearchPeakValue(numbers, target)
       << endl;

  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<float>& vec, float target) {
  int st = 0;
  int end = vec.size() - 1;
  while (st <= end) {
    int mid = ((end - st) / 2) + st;
    if (target > vec[mid]) {
      st = mid + 1;
    } else if (target < vec[mid]) {
      end = mid - 1;
    } else {
      return mid;
    }
  }
  return -1;
}

int main() {
  vector<float> numbers;

  float number;
  float target;
  int vectorSize;
  cout << "please enter your array length for binary search: ";
  cin >> vectorSize;

  cout << "please enter the numbers one by one in ascending order: " << endl;

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

  cout << "please the target number for binary search: ";
  cin >> target;

  cout << "target " << target
       << " found at index: " << binarySearch(numbers, target) << endl;

  return 0;
}
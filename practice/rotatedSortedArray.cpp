#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<float>& vec, float target) {
  int st = 0;
  int end = vec.size() - 1;
  while (st <= end) {
    int mid = ((end - st) / 2) + st;
    if (vec[mid] == target) {
      return mid;
    }
    // is left half sorted ??
    if (vec[st] <= vec[mid]) {
      if (vec[st] <= target && target <= vec[mid]) {
        end = mid - 1;
      } else {
        st = mid + 1;
      }
    } else {  // otherwise right half must be sorted
      if (vec[mid] <= target && target <= vec[end]) {
        st = mid + 1;
      } else {
        end = mid - 1;
      }
    }
  }
  return -1;
}

int main() {
  vector<float> numbers;

  float number;
  float target;
  int vectorSize;
  cout << "please enter your array length of rotated sorted array for binary "
          "search: ";
  cin >> vectorSize;

  cout << "please enter the numbers one by one in ascending order (left half "
          "or "
          "right half must be sorted): "
       << endl;

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

  cout << "enter the target: ";
  cin >> target;

  cout << "target " << target
       << " found at index: " << binarySearch(numbers, target) << endl;

  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int binarySearchSingleElement(vector<float>& vec) {
  int st = 0;
  int end = vec.size() - 1;

  if (vec.size() == 1) {
    return 0;
  }

  while (st <= end) {
    int mid = ((end - st) / 2) + st;  // calculate mid point

    if (mid == st) {
      if (vec[0] != vec[1]) return 0;
    }

    if (mid == end) {
      if (vec[mid] != vec[mid - 1]) return mid;
    }

    if (vec[mid] != vec[mid - 1] &&
        vec[mid] != vec[mid + 1]) {  // check mid is answer or not
      return mid;
    }
    if (mid % 2 == 0) {  // both side even case
      if (vec[mid] == vec[mid - 1]) {
        end = mid - 1;
      } else {
        st = mid + 1;
      }
    } else {  // both side odd case
      if (vec[mid] == vec[mid - 1]) {
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
  int vectorSize;
  cout << "please enter the length of your array to find single value of your "
          "duplicate array (size always be odd): ";
  cin >> vectorSize;

  cout << "please enter the numbers one by one in duplicate form except one"
       << endl;

  numbers.clear();
  for (int i = 0; i < vectorSize; i++) {
    cin >> number;
    numbers.push_back(number);
  }

  cout << "your duplicate array is: ";
  for (float val : numbers) {
    cout << val << " ";
  }
  cout << endl;
  int peakIndex = binarySearchSingleElement(numbers);
  cout << "single element found at index: "
       << binarySearchSingleElement(numbers) << endl;
  cout << "the element is: " << numbers[peakIndex] << endl;

  return 0;
}
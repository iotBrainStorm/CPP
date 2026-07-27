#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<float>& arr) {
  int length = arr.size();
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main() {
  vector<float> unsortedArr;
  int length;
  float value;

  cout << "please enter the length of your un-sorted array: ";
  cin >> length;
  cout << "please enter the values one by one" << endl;

  unsortedArr.clear();

  for (int i = 0; i < length; i++) {
    cin >> value;
    unsortedArr.push_back(value);
  }

  cout << "your un-sorted array is like: ";
  for (float val : unsortedArr) {
    cout << val << " ";
  }
  cout << endl;

  bubbleSort(unsortedArr);

  cout << "your sorted array is: ";
  for (float val : unsortedArr) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
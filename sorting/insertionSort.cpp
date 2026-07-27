#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<float>& arr) {
  int length = arr.size();

  for (int i = 1; i < length; i++) {
    float curr = arr[i];
    int prev = i - 1;

    while (prev >= 0 && arr[prev] > curr) {
      arr[prev + 1] = arr[prev];  // Shift element to the right
      prev--;
    }

    arr[prev + 1] = curr;  // Insert current element
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

  insertionSort(unsortedArr);

  cout << "your sorted array is: ";
  for (float val : unsortedArr) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
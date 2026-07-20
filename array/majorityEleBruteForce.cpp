#include <iostream>
#include <vector>
using namespace std;

int findMajority(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    int freq = 1;
    for (int j = i + 1; j < size; j++) {
      if (arr[i] == arr[j]) {
        freq++;
      }
    }
    if (freq > (size / 2)) {
      return arr[i];
    }
  }
  return -1;  // it means no majority element is found
}

int main() {
  int size = 5;
  int arr[size];
  int target;

  cout << "please enter 5 numbers to find majority" << endl;
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
  cout << " ]" << endl;

  target = findMajority(arr, size);
  cout << "majority element is: " << target << endl;
  return 0;
}
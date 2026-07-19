#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz) {
  int start = 0;
  int end = sz - 1;
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main() {
  int size = 5;

  int numbers[size];

  cout << "please enter 5 numbers for reverse the array" << endl;

  for (int i = 0; i < size; i++) {
    cout << "please enter " << i << " element: ";
    cin >> numbers[i];
  }

  cout << "your original array is like: { ";
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      cout << numbers[size - 1] << " }";
      break;
    }
    cout << numbers[i] << ", ";
  }

  reverseArray(numbers, size);

  cout << "\nyour reverse array is like: { ";
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      cout << numbers[size - 1] << " }";
      break;
    }
    cout << numbers[i] << ", ";
  }

  return 0;
}
#include <iostream>
using namespace std;

int main() {
  int size = 5;
  int arr[size];

  cout << "please enter 5 numbers to find out all possible sub-arrays" << endl;

  for (int i = 0; i < size; i++) {
    cout << "please enter " << i << " element: ";
    cin >> arr[i];
  }

  cout << "your original array is: { ";
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      cout << arr[i] << " }";
      break;
    }
    cout << arr[i] << ", ";
  }
  cout << endl;

  cout << "all possible sub-arrays are:\n";

  for (int start = 0; start < size; start++) {
    for (int end = start; end < size; end++) {
      cout << "{ ";
      for (int index = start; index <= end; index++) {
        if (start == end) {
          cout << arr[index] << " }";
        } else if (index == end) {
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

  return 0;
}
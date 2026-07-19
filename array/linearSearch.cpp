#include <iostream>
using namespace std;

int main() {
  int size = 5;
  int numbers[size];
  int target;
  bool isFound = false;

  cout << "please enter 5 numbers for linear search" << endl;

  for (int i = 0; i < size; i++) {
    cout << "please enter " << i << " element: ";
    cin >> numbers[i];
  }

  cout << "your array is like: { ";
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      cout << numbers[size - 1] << " }";
      break;
    }
    cout << numbers[i] << ", ";
  }

  cout << "\nplease enter the number you want to search: ";
  cin >> target;

  for (int i = 0; i < size; i++) {
    if (target == numbers[i]) {
      cout << "match found at index: " << i << endl;
      isFound = true;
    }
  }

  if (isFound == false) {
    cout << "match not found" << endl;
  }

  return 0;
}
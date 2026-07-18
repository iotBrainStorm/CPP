#include <iostream>
using namespace std;

int main() {
  int size = 5;
  int largest = 0;
  int marks[size];

  cout << "please enter 5 numbers to find out largest one" << endl;

  for (int i = 0; i < size; i++) {
    cout << "please enter " << i << " element: ";
    cin >> marks[i];
  }

  cout << "the largest number is: ";

  for (int i = 0; i < size - 1; i++) {
    if (marks[i + 1] > marks[i]) {
      largest = marks[i + 1];
    } else {
      largest = marks[i];
    };
  }

  // for (int i = 0; i < size; i++) {
  //   largest = max(marks[i], largest);
  // }

  cout << largest << endl;

  return 0;
}
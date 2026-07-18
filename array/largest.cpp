#include <iostream>
using namespace std;

int main() {
  int size = 5;
  int largest = INT32_MIN;
  int marks[size];
  int position;

  cout << "please enter 5 numbers to find out largest one" << endl;

  for (int i = 0; i < size; i++) {
    cout << "please enter " << i << " element: ";
    cin >> marks[i];
  }

  for (int i = 0; i < size; i++) {
    if (marks[i] > largest) {
      largest = marks[i];
      position = i;
    }
  }

  // for (int i = 0; i < size; i++) {
  //   largest = max(marks[i], largest);
  // }

  cout << "the largest number at " << position << " position is: " << largest
       << endl;
  return 0;
}
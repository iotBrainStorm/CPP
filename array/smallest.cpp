#include <iostream>
using namespace std;

int main() {
  int size = 5;
  int smallest = INT32_MAX;  // positive infinite number
  int marks[size];
  int position;

  cout << "please enter 5 numbers to find out smallest one" << endl;

  for (int i = 0; i < size; i++) {
    cout << "please enter " << i << " element: ";
    cin >> marks[i];
  }

  for (int i = 0; i < size; i++) {
    if (marks[i] < smallest) {
      smallest = marks[i];
      position = i;
    }
  }

  // for (int i = 0; i < size; i++) {
  //   smallest = min(marks[i], smallest);
  // }

  cout << "the smallest number at " << position << " position is: " << smallest
       << endl;

  return 0;
}
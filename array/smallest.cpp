#include <iostream>
using namespace std;

int main() {
  int size = 5;
  int smallest = 0;
  int marks[size];

  cout << "please enter 5 numbers to find out smallest one" << endl;

  for (int i = 0; i < size; i++) {
    cout << "please enter " << i << " element: ";
    cin >> marks[i];
  }

  cout << "the smallest number is: ";

  for (int i = 0; i < size - 1; i++) {
    if (marks[i + 1] < marks[i]) {
      smallest = marks[i + 1];
    } else {
      smallest = marks[i];
    };
  }

  cout << smallest << endl;

  return 0;
}
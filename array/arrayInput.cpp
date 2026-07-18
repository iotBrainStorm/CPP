#include <iostream>
using namespace std;

int main() {
  int size = 5;
  int sum = 0;
  float avg;
  int marks[size];

  cout << "please enter 5 subjects marks to calculate average" << endl;

  for (int i = 0; i < size; i++) {
    cout << "please enter " << i << " element: ";
    cin >> marks[i];
  }

  cout << "the average number of 5 subjects is: ";

  for (int i = 0; i < size; i++) {
    sum += marks[i];
    avg = (float)sum / 5;
  }

  cout << avg << endl;

  return 0;
}
#include <iostream>
using namespace std;

int findMax(int a, int b) {  // take parameters
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  int num1, num2;
  cout << "please enter first number: ";
  cin >> num1;

  cout << "please enter second number: ";
  cin >> num2;

  cout << "the bigger number is: " << findMax(num1, num2)
       << endl;  // pass arguments

  return 0;
}
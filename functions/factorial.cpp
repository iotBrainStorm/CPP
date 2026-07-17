#include <iostream>
using namespace std;

int findFactorial(int n) {
  int product = 1;
  for (int i = 1; i <= n; i++) {
    product = product * i;
  }
  return product;
}

int main() {
  int number;
  cout << "please enter the number to find factorial: ";
  cin >> number;

  cout << "the factorial of " << number << " is: ";

  for (int i = number; i >= 1; i--) {
    cout << i;
    if (i == 1) {
      break;
    }
    cout << " X ";
  }

  cout << " = " << findFactorial(number) << endl;

  return 0;
}
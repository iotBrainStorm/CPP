/*
 * GCD or HCF => Highest Common Factor
 * ex: HCF of (20, 28) => 4
 */

#include <algorithm>
#include <iostream>
using namespace std;

int findGCD(int num1, int num2) {
  // find out corner case
  if (num1 == 0) {
    return num2;
  }
  if (num2 == 0) {
    return num1;
  }
  if (num1 == num2) {
    return num1; // num1 or num2
  }

  int gcd = 1;
  for (int i = 1; i <= min(num1, num2); i++) {
    if (num1 % i == 0 && num2 % i == 0) {
      gcd = i;
    }
  }
  return gcd;
}

int main() {
  int number1, number2;
  int gcd;
  cout << "enter two numbers to calculates its GCD or HCF" << endl;

  cout << "please enter first number: ";
  cin >> number1;
  cout << "please enter second number: ";
  cin >> number2;

  gcd = findGCD(number1, number2);
  cout << "GCD of " << number1 << " and " << number2 << " is: " << gcd << endl;

  return 0;
}
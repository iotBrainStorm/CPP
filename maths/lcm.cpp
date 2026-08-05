/*
 * find LCM (Least Common Multiple)
 * if any two numbers a and b => a * b = LCM(a, b) * HCF(a, b)
 */

#include <algorithm>
#include <iostream>
using namespace std;

int findGCD(int num1, int num2) {
  while (num1 > 0 && num2 > 0) {
    if (num1 > num2) {
      num1 = num1 % num2;
    } else {
      num2 = num2 % num1;
    }
  }
  if (num1 == 0) {
    return num2;
  } else {
    return num1;
  }
}

int findLCM(int a, int b) {
  return ((a * b)) / findGCD(a, b);
}

int main() {
  int number1, number2;
  int gcd;
  cout << "enter two numbers to calculates its LCM and HCF" << endl;

  cout << "please enter first number: ";
  cin >> number1;
  cout << "please enter second number: ";
  cin >> number2;

  cout << "LCM of " << number1 << " and " << number2 << " is: " << findLCM(number1, number2) << endl;
  cout << "HCF of " << number1 << " and " << number2 << " is: " << findGCD(number1, number2) << endl;
  return 0;
}
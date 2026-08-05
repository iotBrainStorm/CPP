/*
 * Euclid's Algorithm
 * gcd(a, b) = gcd((a - b), b) when a > b
 * gcd(a, b) = gcd(a, (b - a)) when b > a
 * ex: gcd(20, 28) = gcd(20, 8) = gcd(12, 8) = gcd(4, 8) = gcd(4, 4) = gcd(0, 4) = so GCD is 4
 * how to more optimized: if a >> b or b >> a then instead of substraction repeatedly finds reminder like a % b or b % a
 * ex: gcd(20, 28) = gcd(20, 28 % 20) = gcd(12, 8) = gcd(12 % 8, 8) = gcd(4, 8) = gcd(4, 8 % 4) = gcd(4, 0) = so GCD is 4
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
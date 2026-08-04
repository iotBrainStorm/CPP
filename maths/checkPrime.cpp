/*
 * to check prime => we need to search the number is divisible by any number from 2 to root of that number
 */

#include <algorithm>
#include <iostream>
using namespace std;

string isPrime(int num) {
  bool isNegative = false;
  if (num < 0) {
    isNegative = true;
    num = (-1) * num;
  }
  if (num == 0) {
    return "neither prime nor composite";
  }
  if (num == 1) {
    return "prime";
  }
  if (num == 2) {
    return "even-prime";
  }

  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return "non-prime(composite)";
    }
  }
  if (isNegative) {
    return "negative-prime";
  }
  return "prime";
}

int main() {
  int number;

  cout << "please enter a number to check prime or not: ";
  cin >> number;
  cout << number << " is " << isPrime(number) << endl;

  return 0;
}
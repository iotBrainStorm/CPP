#include <iostream>
using namespace std;

int sumOfDigits(int num) {
  int digitSum = 0;
  while (num > 0) {
    int lastDigit = num % 10;
    num /= 10;
    digitSum += lastDigit;
  }
  return digitSum;
}

int main() {
  int number;
  cout << "please enter your number to find the sum of digits: ";
  cin >> number;

  cout << "the sum of digits is: " << sumOfDigits(number) << endl;

  return 0;
}
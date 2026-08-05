/*
 * armstrong number is a number that is equal to the sum of cubes of its digits
 * ex: 153 => 1^3 + 5^3 + 3^3 = 1 + 125 + 9 = 153 (exact same number)
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool isArmstrong(int num) {
  int copyNum = num;
  int sumOfCube = 0;
  while (num != 0) {
    int digit = num % 10;
    sumOfCube += digit * digit * digit;
    num = num / 10;
  }
  if (copyNum == sumOfCube) {
    return true;
  }
  return false;
}

int main() {
  int number;
  cout << "please enter a number to find it armstrong or not: ";
  cin >> number;

  if (isArmstrong(number)) {
    cout << number << " is an armstrong number" << endl;
  } else {
    cout << number << " isn't an armstrong number" << endl;
  }

  return 0;
}
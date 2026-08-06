/*
 * palindrome number means, number is equal to its reverse
 * ex: 353 => reverse is => 353
 */

#include <algorithm>
#include <iostream>
using namespace std;

int reverseNumber(int n) {
  int reverse = 0;
  while (n != 0) {
    int dig = n % 10;
    if (reverse > INT32_MAX / 10 || reverse < INT32_MIN / 10) { // out of range
      return 0;
    }
    reverse = reverse * 10 + dig;
    n = n / 10;
  }
  return reverse;
}

bool isPalindrome(int num) {
  if (num < 0) {
    return false;
  }
  return num == reverseNumber(num);
}

int main() {
  int number;

  cout << "please enter a number to check palindrome or not: ";
  cin >> number;

  if (isPalindrome(number)) {
    cout << number << " is palindrome" << endl;
  } else {
    cout << number << " isn't palindrome" << endl;
  }

  return 0;
}
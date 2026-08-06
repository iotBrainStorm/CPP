/*
 * 3576 => 6753
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

int main() {
  int number;

  cout << "please enter a number to reverse it: ";
  cin >> number;
  cout << "reverse of " << number << " is: " << reverseNumber(number) << endl;

  return 0;
}
/*
 * n! = n * (n - 1)!
 * 0! = 1 => this is our base case
 * ex =>
please a number to calculate its factorial: 5
5! = 120
please a number to calculate its factorial: 0
0! = 1
please a number to calculate its factorial: 1
1! = 1
 */

#include <iostream>
using namespace std;

long long factorial(int n) {
  if (n == 0) { // base case
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  int number;
  cout << "please a number to calculate its factorial: ";
  cin >> number;
  cout << number << "! = " << factorial(number) << endl;

  return 0;
}
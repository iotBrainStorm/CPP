/*
 * sieve of eratosthenes process
 * here we will find all the prime numbers in a given range
 * in this process, first we assume all numbers in given range is prime => assign true (here 0, 1 will be skipped)
 * next we will travel all the numbers and its factors also => assign false
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> findDigits(int num) {
  vector<int> digits;
  while (num != 0) {
    int digit = num % 10;
    digits.push_back(digit);
    num = num / 10;
  }
  return digits;
}

int main() {
  int number;
  vector<int> ans;

  cout << "please enter a number to find its digits: ";
  cin >> number;

  ans = findDigits(number);

  cout << "digits are: ";
  for (int val : ans) {
    cout << val << " ";
  }
  cout << endl;
  cout << "number of digits: " << ans.size() << endl;

  return 0;
}
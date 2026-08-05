#include <algorithm>
#include <iostream>
#include <math.h>
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
  cout << "number of digits: " << (int)(log10(number) + 1) << endl; // shortcut to find out the number of digits

  return 0;
}
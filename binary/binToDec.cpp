#include <iostream>
using namespace std;

int binToDec(int n) {
  int pow = 1;
  int ans = 0;
  while (n > 0) {
    int rem = n % 10;
    ans += (rem * pow);
    n /= 10;
    pow = pow * 2;
  }
  return ans;
}

int main() {
  int num;
  cout << "please enter a bin number: ";
  cin >> num;

  cout << "dec value of " << num << " is: " << binToDec(num) << endl;

  return 0;
}
#include <iostream>
using namespace std;

int decToBin(int n) {
  int pow = 1;
  int ans = 0;
  while (n > 0) {
    int rem = n % 2;
    n /= 2;
    ans += (rem * pow);
    pow = pow * 10;
  }
  return ans;
}

int main() {
  int num;
  cout << "please enter a dec number: ";
  cin >> num;

  cout << "binary value of " << num << " is: " << decToBin(num) << endl;

  return 0;
}
#include <iostream>
using namespace std;

double powCal(double num, int pow) {
  if (pow < 0) {  // incase power is negative
    num = 1 / num;
    pow = -pow;
  }
  if (pow == 0 || num == 1) return 1.0;
  if (num == 0) return 0.0;
  if (num == -1 && pow % 2 == 0) return 1.0;
  if (num == -1 && pow % 2 != 0) return -1.0;

  long binForm_pow = pow;  // just copy the dec form of number
  double ans = 1;
  while (binForm_pow > 0) {      // check the dec number is non zero
    if (binForm_pow % 2 == 1) {  // calculate last binary digit of dec number
      ans = ans * num;
    }
    num = num * num;
    binForm_pow = binForm_pow / 2;
  }
  return ans;
}

int main() {
  double num;
  int pow;
  cout << "to calculate the power, please enter a number: ";
  cin >> num;
  cout << "please enter its power: ";
  cin >> pow;
  cout << num << " to the power of " << pow << " is: " << powCal(num, pow)
       << endl;

  return 0;
}
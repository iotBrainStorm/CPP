#include <iostream>
using namespace std;

int sumOfN(int n) {
  int sum = 0;
  for (int i = 0; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int main() {
  int range;
  cout << "please enter your range to find sum: ";
  cin >> range;

  cout << "the sum 1 to " << range << " is: " << sumOfN(range) << endl;

  return 0;
}
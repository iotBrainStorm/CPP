/*
 * ex =>
please enter your range: 100
sum upto 100 is: 5050
 */

#include <iostream>
using namespace std;

long long calSum(int n) {
  if (n == 1) {
    return 1;
  }
  return n + calSum(n - 1);
}

int main() {
  int range;
  cout << "please enter your range: ";
  cin >> range;
  cout << "sum upto " << range << " is: " << calSum(range) << endl;

  return 0;
}
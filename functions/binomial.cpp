#include <iostream>
using namespace std;

int findFactorial(int n) {
  int product = 1;
  for (int i = 1; i <= n; i++) {
    product = product * i;
  }
  return product;
}

int nCr(int n, int r) {
  return (findFactorial(n) / (findFactorial(r) * findFactorial(n - r)));
}

int main() {
  int n, r;
  cout << "please enter n: ";
  cin >> n;

  cout << "please enter r: ";
  cin >> r;

  cout << "the binomial expansion for " << n << "C" << r << " is: " << nCr(n, r)
       << endl;

  return 0;
}
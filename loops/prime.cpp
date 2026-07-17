#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "please enter a number: ";
  cin >> number;
  bool isPrime = true;

  for (int i = 2; i * i <= number; i++) {
    // we need to check only 2 to root of number
    if (number % i == 0) {
      isPrime = false;
      cout << "factor: " << i << endl;
    }
  }

  if (isPrime) {
    cout << number << " is a prime number" << endl;
  } else {
    cout << "therefore, " << number << " is a non-prime number" << endl;
  }

  return 0;
}
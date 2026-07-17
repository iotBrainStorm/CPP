#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter a number: ";
  cin >> n;

  if (n >= 0) {
    if (n % 2 == 0) {
      cout << "the number is positive even" << endl;
    } else {
      cout << "the number is positive odd" << endl;
    }
  }

  if (n < 0) {
    if (n % 2 == 0) {
      cout << "the number is negative even" << endl;
    } else {
      cout << "the number is negative odd" << endl;
    }
  }
  return 0;
}
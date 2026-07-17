#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter a number: ";
  cin >> n;

  if (n >= 0) {
    cout << "the number is positive" << endl;
  } else {
    cout << "the number is negative" << endl;
  }
  return 0;
}
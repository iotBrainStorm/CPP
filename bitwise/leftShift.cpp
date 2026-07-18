#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "please enter a number for left shift: ";
  cin >> a;
  cout << "please enter how many shift from right to left: ";
  cin >> b;

  cout << "left shift of " << a << " for " << b << " position is: " << (a << b)
       << endl;

  return 0;
}
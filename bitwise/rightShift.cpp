#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "please enter a number for right shift: ";
  cin >> a;
  cout << "please enter how many shift from left to right: ";
  cin >> b;

  cout << "right shift of " << a << " for " << b << " position is: " << (a >> b)
       << endl;

  return 0;
}
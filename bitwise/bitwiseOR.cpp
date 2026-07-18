#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "please enter two numbers for OR operation: ";
  cin >> a >> b;

  cout << a << " OR " << b << " is: " << (a | b) << endl;

  return 0;
}
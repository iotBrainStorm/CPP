#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "please enter two numbers for AND operation: ";
  cin >> a >> b;

  cout << a << " AND " << b << " is: " << (a & b) << endl;

  return 0;
}
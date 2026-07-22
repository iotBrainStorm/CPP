#include <iostream>
using namespace std;

void passByValue(int a) { a = 20; }

void passByRef(int* a) { *a = 20; }

int main() {
  int a = 10;

  cout << "original value is: " << a << endl;

  passByValue(a);
  cout << "pass by value is: " << a << endl;

  passByRef(&a);
  cout << "pass by reference is: " << a << endl;

  return 0;
}
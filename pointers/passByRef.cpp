#include <iostream>
using namespace std;

void passByValue(int a) { a = 20; }

void passByRef(int* a) { *a = 20; }  // using pointer

void passByRefAlias(int& b) { b = 20; }  // using alias

int main() {
  int a = 10;

  cout << "original value is: " << a << endl;

  passByValue(a);
  cout << "pass by value is: " << a << endl;

  passByRef(&a);
  cout << "pass by reference using pointer is: " << a << endl;

  passByRefAlias(a);
  cout << "pass by reference using alias is: " << a << endl;

  return 0;
}
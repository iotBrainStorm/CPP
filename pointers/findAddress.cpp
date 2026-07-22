#include <iostream>
using namespace std;

int main() {
  int a = 15;
  float b = 3.14;

  int* ptr1 = &a;
  float* ptr2 = &b;

  cout << "address of int " << a << " is: " << &a << endl;
  cout << "address of float " << b << " is: " << &b << endl;

  cout << "address of int " << a << " is: " << ptr1 << endl;
  cout << "address of float " << b << " is: " << ptr2 << endl;

  cout << "address of ptr1 " << ptr1 << " is: " << &ptr1 << endl;
  cout << "address of ptr2 " << ptr2 << " is: " << &ptr2 << endl;

  return 0;
}
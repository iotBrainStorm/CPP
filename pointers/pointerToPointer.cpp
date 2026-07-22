#include <iostream>
using namespace std;

int main() {
  int a = 15;

  int* ptr1 = &a;      // storing the address of int a
  int** ptr2 = &ptr1;  // storing the address of another int* pointer

  cout << "address of int " << a << " is: " << &a << endl;
  cout << "address of int " << a << " is: " << ptr1 << endl;

  cout << "address of int* " << ptr1 << " is: " << &ptr1 << endl;
  cout << "address of int* " << ptr1 << " is: " << ptr2 << endl;

  return 0;
}
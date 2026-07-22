#include <iostream>
using namespace std;

int main() {
  int a = 15;
  int* ptr1 = &a;      // storing the address of int a
  int** ptr2 = &ptr1;  // storing the address of another int* pointer

  int originalValue1 = *(&a);  // dereference of pointer, will give the value
  int originalValue2 = *(ptr1);
  int originalValue3 = **(ptr2);  // double dereference which is 15

  cout << "address of int " << a << " is: " << &a << endl;
  cout << "address of int " << a << " is: " << ptr1 << endl;

  cout << "address of int* " << ptr1 << " is: " << &ptr1 << endl;
  cout << "address of int* " << ptr1 << " is: " << ptr2 << endl;

  cout << "original value is: " << originalValue1 << endl;
  cout << "original value is: " << originalValue2 << endl;
  cout << "original value is: " << originalValue3 << endl;

  return 0;
}
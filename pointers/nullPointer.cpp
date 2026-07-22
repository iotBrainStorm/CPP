#include <iostream>
using namespace std;

int main() {
  int** ptr = NULL;

  cout << "value stored in null pointer is " << ptr << endl;
  cout << "but the address of null pointer is " << &ptr << endl;

  return 0;
}
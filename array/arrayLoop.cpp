#include <iostream>
using namespace std;

int main() {
  int marks[5] = {98, 67, 78, 57, 86};

  cout << "size of array (bytes): " << sizeof(marks) << endl;

  cout << "number of elements (index): " << sizeof(marks) / sizeof(int) << endl;

  int index = sizeof(marks) / sizeof(int);

  for (int i = 0; i < index; i++) {
    cout << i << " element is: " << marks[i] << endl;
  }

  return 0;
}
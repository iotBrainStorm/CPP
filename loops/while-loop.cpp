#include <iostream>
using namespace std;

int main() {
  int range;
  cout << "enter a range: ";
  cin >> range;

  int count = 1;

  while (count <= range) {
    cout << count << " ";
    count++;
  }

  return 0;
}
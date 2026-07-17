#include <iostream>
using namespace std;

int main() {
  int range;
  cout << "enter a range: ";
  cin >> range;

  for (int count = 1; count <= range; count++) {
    cout << count << " ";
  }

  return 0;
}
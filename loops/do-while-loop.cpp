#include <iostream>
using namespace std;

int main() {
  int range;
  cout << "enter a range: ";
  cin >> range;
  int count = 1;

  do {
    cout << count << " ";
    count++;
  } while (count <= range);

  return 0;
}
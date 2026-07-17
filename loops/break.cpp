#include <iostream>
using namespace std;

int main() {
  int range;
  cout << "enter a range (upto 100): ";
  cin >> range;

  int count = 1;
  int sum = 0;

  for (count = 1; count <= range; count++) {
    sum += count;
    if (count == 5) {
      cout << "The sum of numbers from 1 to 5 is: " << sum << endl;
      break;
    }
  }

  return 0;
}
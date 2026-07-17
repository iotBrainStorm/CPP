#include <iostream>
using namespace std;

int main() {
  int range;
  cout << "enter a range: ";
  cin >> range;
  int sum = 0;

  for (int count = 1; count <= range; count++) {
    if (count % 2 != 0) {
      cout << count << " ";
      sum += count;
    }
  }
  cout << endl;
  cout << "The sum of odd numbers from 1 to " << range << " is: " << sum
       << endl;
  return 0;
}
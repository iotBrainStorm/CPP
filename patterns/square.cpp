#include <iostream>
using namespace std;

int main() {
  int side;
  cout << "please enter a side: ";
  cin >> side;

  for (int i = 0; i < side; i++) {
    for (int j = 1; j <= side; j++) {
      cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}
#include <iostream>
using namespace std;

int main() {
  int side;
  cout << "please enter even side: ";
  cin >> side;
  if (side % 2 != 0) {
    cout << "invalid side" << endl;
  }

  if (side % 2 == 0) {
    cout << "row: " << side << " col: " << side << endl;

    // top
    for (int j = 0; j < side / 2; j++) {
      // star print
      for (int i = 0; i < j + 1; i++) {
        cout << "*";
      }

      // space print
      for (int k = 0; k < (side - (2 * j + 2)); k++) {
        cout << " ";
      }

      // star print
      for (int l = 0; l < j + 1; l++) {
        cout << "*";
      }

      cout << endl;
    }

    // bottom
    for (int j = side / 2; j > 0; j--) {
      // star print
      for (int i = 0; i < j; i++) {
        cout << "*";
      }

      // space print
      for (int k = 0; k < (side - (2 * j)); k++) {
        cout << " ";
      }

      // star print
      for (int i = 0; i < j; i++) {
        cout << "*";
      }

      cout << endl;
    }
  }

  return 0;
}
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter your marks: ";
  cin >> n;

  if (n >= 90) {
    cout << "your grade is AA" << endl;
  } else if (n >= 80) {
    cout << "your grade is A" << endl;
  } else if (n >= 70) {
    cout << "your grade is B" << endl;
  } else if (n >= 60) {
    cout << "your grade is C" << endl;
  } else if (n >= 50) {
    cout << "your grade is D" << endl;
  } else if (n < 50) {
    cout << "you are failed" << endl;
  }

  return 0;
}
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter a number: ";
  cin >> n;

  cout << (n < 0 ? "negative" : "positive") << endl;
  return 0;
}
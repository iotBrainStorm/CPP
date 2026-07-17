#include <iostream>
using namespace std;

int main() {
  char ch;
  cout << "enter a character: ";
  cin >> ch;

  if (ch >= 'A' && ch <= 'Z') {
    cout << "the character is uppercase" << endl;
  } else if (ch >= 'a' && ch <= 'z') {
    cout << "the character is lowercase" << endl;
  } else {
    cout << "the character is not an alphabet" << endl;
  }

  return 0;
}
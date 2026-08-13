/*
 * when a function calls itself
 * base case => when satisfied the ending condition
 */

#include <iostream>
using namespace std;

void printNums(int num) {
  if (num == 1) {
    cout << "1" << endl;
    return;
  }
  cout << num << " ";
  num--;
  printNums(num);
}

int main() {
  int range;
  cout << "please enter your range to print: ";
  cin >> range;
  printNums(range);
  return 0;
}
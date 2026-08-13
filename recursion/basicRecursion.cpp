/*
 * when a function calls itself
 * base case => when satisfied the ending condition
 * base case is the smallest case which ans to be known
 * ex =>
 * please entr your range to print: 12
12 11 10 9 8 7 6 5 4 3 2 1
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
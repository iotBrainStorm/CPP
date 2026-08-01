#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string name;
  cout << "please enter your your name for next and prev permutation: ";
  cin >> name;

  // next permutation
  next_permutation(name.begin(), name.end());
  cout << "next permutation is: " << name << endl;

  // prev permutation
  prev_permutation(name.begin(), name.end());
  cout << "prev permutation is: " << name << endl;

  return 0;
}
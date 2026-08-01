#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {2, 8, 0, 1, 8, 5, 11, 34};
  cout << "original vector is like:\n";
  for (auto p : vec) {
    cout << p << " ";
  }
  cout << endl;

  // reverse of vector
  reverse(vec.begin(), vec.end());
  cout << "reverse of the vector is like:\n";
  for (auto p : vec) {
    cout << p << " ";
  }
  cout << endl;

  return 0;
}
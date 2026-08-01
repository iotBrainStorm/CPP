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

  // min value
  cout << "min value is: " << *(min_element(vec.begin(), vec.end())) << endl;

  // max value
  cout << "max value is: " << *(max_element(vec.begin(), vec.end())) << endl;

  return 0;
}
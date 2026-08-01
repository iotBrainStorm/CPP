#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {9, 1, 0, -4, 6, 3, 5};
  cout << "original array is like: ";
  for (auto val : vec) {
    cout << val << " ";
  }
  cout << endl;

  // sort in ascending order
  sort(vec.begin(), vec.end());
  cout << "ascending order sorting: ";
  for (auto val : vec) {
    cout << val << " ";
  }
  cout << endl;

  // sort in descending order
  sort(vec.begin(), vec.end(), greater<int>());
  cout << "descending order sorting: ";
  for (auto val : vec) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
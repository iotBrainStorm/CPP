#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int arr[7] = {9, 1, 0, -4, 6, 3, 5};
  cout << "original array is like: ";
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << endl;

  // sort in ascending order
  sort(arr, arr + 7);
  cout << "ascending order sorting: ";
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << endl;

  // sort in descending order
  sort(arr, arr + 7, greater<int>());
  cout << "descending order sorting: ";
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
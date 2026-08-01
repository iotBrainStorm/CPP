#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<pair<int, int>> vec = {{3, 5}, {1, 8},   {-7, 5}, {-1, -9},
                                {0, 0}, {12, 15}, {-90, 5}};
  cout << "original vector is like:\n";
  for (auto p : vec) {
    cout << p.first << " " << p.second << endl;
  }

  // ascending order sort on the basis first element of pair
  sort(vec.begin(), vec.end());
  cout << "ascending order sort on the basis first element of pair:\n";
  for (auto p : vec) {
    cout << p.first << " " << p.second << endl;
  }

  // descending order sort on the basis first element of pair
  sort(vec.begin(), vec.end(), greater<pair<int, int>>());
  cout << "descending order sort on the basis first element of pair:\n";
  for (auto p : vec) {
    cout << p.first << " " << p.second << endl;
  }

  return 0;
}
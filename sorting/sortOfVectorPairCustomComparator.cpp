#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second)
    return true;
  else
    return false;
}

bool comparatorCase2(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return false;

  if (p1.first < p2.first)
    return true;
  else
    return false;
}

int main() {
  vector<pair<int, int>> vec = {{3, 5}, {1, 8}, {-7, 5}, {-1, -9}, {0, 0}, {12, 15}, {-90, 5}};
  cout << "original vector is like:\n";
  for (auto p : vec) {
    cout << p.first << " " << p.second << endl;
  }

  // ascending order sort on the basis second element of pair
  sort(vec.begin(), vec.end(), comparator);
  cout << "ascending order sort on the basis second element of pair:\n";
  for (auto p : vec) {
    cout << p.first << " " << p.second << endl;
  }

  // ascending order sort on the basis second and first element of pair
  sort(vec.begin(), vec.end(), comparatorCase2);
  cout << "ascending order sort on the basis second and first element of pair:\n";
  for (auto p : vec) {
    cout << p.first << " " << p.second << endl;
  }

  return 0;
}
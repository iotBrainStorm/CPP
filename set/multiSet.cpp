#include <iostream>
#include <set>
using namespace std;

int main() {
  /*
   * it stores all the values in duplicate
   * it stores the data in sorted order
   */

  multiset<int> s;

  s.insert(9);
  s.insert(2);
  s.insert(6);
  s.insert(5);
  s.insert(0);
  s.insert(1);

  s.insert(9);  // duplicate
  s.insert(2);  // duplicate
  s.insert(6);  // duplicate
  s.insert(5);  // duplicate

  for (auto val : s) {
    cout << val << " " << endl;
  }

  return 0;
}
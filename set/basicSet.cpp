#include <iostream>
#include <set>
using namespace std;

int main() {
  /*
   * it stores all unique value, not in duplicate
   * it stores the data in sorted order
   * if we lower bound function it will the exactly same value if it exist
   * otherwise it will be return just immediate greater value
   * if we upper bound function it will return just immediate greater value
   */

  set<int> s;

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

  // lower bound
  cout << "lower bound (5): " << *(s.lower_bound(5)) << endl;    // 5
  cout << "lower bound (7): " << *(s.lower_bound(7)) << endl;    // 9
  cout << "lower bound (12): " << *(s.lower_bound(12)) << endl;  // garbage

  // upper bound
  cout << "upper bound (0): " << *(s.upper_bound(0)) << endl;  // 1
  return 0;
}
#include <iostream>
#include <map>
using namespace std;

int main() {
  /*
   * multi map can store the data with duplicate key and duplicate value also
   */

  multimap<string, int> m;

  m.emplace("tv", 60);
  m.emplace("laptops", 50);
  m.emplace("laptops", 100);
  m.emplace("laptops", 100);
  m.emplace("laptops", 60);
  m.emplace("laptops", 50);
  for (auto p : m) {
    cout << p.first << ": " << p.second << endl;
  }

  return 0;
}
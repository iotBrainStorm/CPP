#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  /*
   * it stores and prints the data randomly
   * it can't store duplicate key, key is always unique value
   * in maximum cases unordered map is used, it is fast
   */

  unordered_map<string, int> m;

  m.emplace("tv", 60);
  m.emplace("laptops", 50);
  m.emplace("fridges", 100);
  m.emplace("tablets", 100);
  m.emplace("mobiles", 60);
  for (auto p : m) {
    cout << p.first << ": " << p.second << endl;
  }

  return 0;
}
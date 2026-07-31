#include <iostream>
#include <map>
using namespace std;

int main() {
  /*
   * map stores the data with unique key and value, value can be duplicate but
   * key can't
   * it stores the data in alphabetical order lexicographically
   */

  map<string, int> m;

  m["tv"] = 90;
  m["laptops"] = 60;
  m["headphones"] = 50;
  m["tablets"] = 70;
  m["mobiles"] = 50;
  m["watches"] = 40;

  for (auto p : m) {
    cout << p.first << ": " << p.second << endl;
  }

  // insert new key
  m.insert({"cameras", 55});
  m.emplace("cpu", 5);
  for (auto p : m) {
    cout << p.first << ": " << p.second << endl;
  }

  // count the key
  cout << "tablet: " << m.count("tablets") << endl;

  // erase the key
  m.erase("cpu");
  for (auto p : m) {
    cout << p.first << ": " << p.second << endl;
  }

  // search any key
  if (m.find("cameras") != m.end()) {
    cout << "camera found" << endl;
  } else {
    cout << "camera not found" << endl;
  }

  return 0;
}
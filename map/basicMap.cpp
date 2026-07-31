#include <iostream>
#include <map>
using namespace std;

int main() {
  /* map stores the data with unique key and value, value can be duplicate but
   key can't
   it stores tha data in alphabetical order */

  map<string, int> m;

  m["tv"] = 90;
  m["laptops"] = 60;
  m["headphones"] = 50;
  m["mobiles"] = 50;
  m["watches"] = 40;

  for (auto p : m) {
    cout << p.first << ": " << p.second << endl;
  }

  return 0;
}
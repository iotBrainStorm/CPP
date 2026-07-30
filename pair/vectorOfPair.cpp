#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main() {
  vector<pair<char, int>> vec = {{'a', 5}, {'b', 7}, {'c', 9}, {'d', 1}};

  // print vector of pair
  for (auto p : vec) {
    cout << p.first << " " << p.second << endl;
  }
  return 0;
}
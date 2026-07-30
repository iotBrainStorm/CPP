#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
  pair<int, int> p = {2, 3};
  pair<string, int> pair = {"Mrinal", 1997};

  // print the pair
  cout << pair.first << endl;
  cout << pair.second << endl;

  return 0;
}
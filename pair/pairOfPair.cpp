#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
  pair<string, pair<int, string>> dob = {"Mrinal", {7, "Jun"}};

  // print the pair
  cout << dob.first << endl;
  cout << dob.second.first << endl;
  cout << dob.second.second << endl;

  return 0;
}
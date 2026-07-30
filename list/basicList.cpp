#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
  list<int> ls;

  // push from back
  ls.push_back(1);
  ls.push_back(2);
  ls.push_back(3);
  ls.push_back(4);
  cout << "all elements in list: ";
  for (int val : ls) {
    cout << val << " ";
  }
  cout << endl;

  // push from front
  ls.push_front(8);
  ls.push_front(7);
  ls.push_front(6);
  ls.push_front(5);
  ls.push_front(4);
  cout << "all elements in list: ";
  for (int val : ls) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
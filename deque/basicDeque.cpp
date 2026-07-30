#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  /* deque can operated from back and front also */
  deque<int> d = {2, 5, 8, 0, 8, 5, 1};

  // push from back
  d.push_back(1);
  d.push_back(2);
  d.push_back(3);
  d.push_back(4);
  cout << "all elements in deque: ";
  for (int val : d) {
    cout << val << " ";
  }
  cout << endl;

  // push from front
  d.push_front(8);
  d.push_front(7);
  d.push_front(6);
  d.push_front(5);
  d.push_front(4);
  cout << "all elements in deque: ";
  for (int val : d) {
    cout << val << " ";
  }
  cout << endl;

  // erase from front and back
  d.pop_front();
  d.pop_back();
  cout << "all elements in deque after erase: ";
  for (int val : d) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
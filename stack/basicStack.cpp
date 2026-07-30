#include <iostream>
#include <stack>
using namespace std;

int main() {
  /* stack always works on Last in First out method */
  stack<int> s;

  // push in stack
  s.push(1);
  s.push(5);
  s.push(4);
  s.push(3);
  s.push(8);
  s.push(7);
  s.push(-4);
  cout << "top value: " << s.top() << endl;  // -4

  // delete element from stack
  s.pop();
  cout << "top value after pop: " << s.top() << endl;  // 7

  // print all elements in reverse order from stack
  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;

  return 0;
}
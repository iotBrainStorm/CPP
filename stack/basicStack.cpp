#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> s;

  // push in stack
  s.push(1);
  s.push(-4);
  cout << "top value: " << s.top() << endl;  // -4

  return 0;
}
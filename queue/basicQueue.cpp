#include <iostream>
#include <queue>
using namespace std;

int main() {
  /* queue always works on First in First out method */
  queue<int> q;

  // push in queue
  q.push(1);
  q.push(5);
  q.push(4);
  q.push(3);
  q.push(8);
  q.push(7);
  q.push(-4);
  cout << "front value: " << q.front() << endl;  // 1

  // print all elements from queue
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;

  return 0;
}
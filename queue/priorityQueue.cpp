#include <iostream>
#include <queue>
using namespace std;

int main() {
  /* priority-queue always highest value on top (sorted manner) */
  priority_queue<int> q;

  // push in priority-queue
  q.push(1);
  q.push(5);
  q.push(4);
  q.push(3);
  q.push(8);
  q.push(7);
  q.push(-4);
  cout << "top value: " << q.top() << endl;  // 8

  // print all elements from priority-queue
  while (!q.empty()) {
    cout << q.top() << " ";
    q.pop();
  }
  cout << endl;

  return 0;
}
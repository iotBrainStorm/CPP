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

  // print in reverse order
  priority_queue<int, vector<int>, greater<int>> rq;

  rq.push(1);
  rq.push(5);
  rq.push(4);
  rq.push(3);
  rq.push(8);
  rq.push(7);
  rq.push(-4);
  // print all elements from priority-queue in reverse order
  while (!rq.empty()) {
    cout << rq.top() << " ";
    rq.pop();
  }
  cout << endl;

  return 0;
}
/*
 * fibonacci series => nth term = (n -1)th term + (n - 2)th term
 * 0, 1, 1, 2, 3, 5, 8, 13 ...

 * ex =>
please enter nth term of fibonacci: 0
0 term is: 0
please enter nth term of fibonacci: 1
1 term is: 1
please enter nth term of fibonacci: 5
5 term is: 5
please enter nth term of fibonacci: 10
10 term is: 55
 */

#include <iostream>
using namespace std;

long long fibonacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int term;
  cout << "please enter nth term of fibonacci: ";
  cin >> term;
  cout << term << " term is: " << fibonacci(term) << endl;

  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec;  // this is an un-sized array
  cout << "size of vec: " << vec.size() << endl;

  // growing of size in vector
  vec.push_back(1);
  cout << "size of vec after push 1: " << vec.size() << endl;
  cout << "cap of vec after push 1: " << vec.capacity() << endl;
  vec.push_back(2);
  cout << "size of vec after push 2: " << vec.size() << endl;
  cout << "cap of vec after push 2: " << vec.capacity() << endl;
  vec.push_back(3);
  cout << "size of vec after push 3: " << vec.size() << endl;
  cout << "cap of vec after push 3: " << vec.capacity() << endl;
  vec.push_back(4);
  cout << "size of vec after push 4: " << vec.size() << endl;
  cout << "cap of vec after push 4: " << vec.capacity() << endl;
  vec.push_back(5);
  cout << "size of vec after push 5: " << vec.size() << endl;
  cout << "cap of vec after push 5: " << vec.capacity() << endl;

  // print all value
  cout << "all values in vec: ";
  for (int val : vec) {
    cout << val << " ";
  }
  cout << endl;

  // emplace back (alternative of push back)
  vec.emplace_back(6);
  cout << "all values in vec: ";
  for (int val : vec) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
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
  cout << "all values in vec after emplace back: ";
  for (int val : vec) {
    cout << val << " ";
  }
  cout << endl;

  // pop back (delete from back)
  vec.pop_back();
  cout << "all values in vec after pop back: ";
  for (int val : vec) {
    cout << val << " ";
  }
  cout << endl;

  // print any index value
  cout << "value at index 2 is: " << vec[2] << " or " << vec.at(2) << endl;

  // print front and back value
  cout << "value at front is: " << vec.front() << endl;
  cout << "value at back is: " << vec.back() << endl;

  // erase function in vector
  vec.erase(vec.begin());  // erase first element
  cout << "all values in vec after erase first element: ";
  for (int val : vec) {
    cout << val << " ";
  }
  cout << endl;
  vec.erase(vec.begin() + 2);  // erase third element
  cout << "all values in vec after erase third element: ";
  for (int val : vec) {
    cout << val << " ";
  }
  cout << endl;
  vec.erase(vec.begin() + 1,
            vec.begin() + 3);  // erase from second to third element
  cout << "all values in vec after erase 2nd to 3rd element: ";
  for (int val : vec) {
    cout << val << " ";
  }
  cout << endl;

  // insert function in vector
  vec.insert(vec.begin(), 5);      // insert 5 at index 0
  vec.insert(vec.begin() + 1, 6);  // insert 6 at index 1
  vec.insert(vec.begin() + 2, 7);  // insert 7 at index 2
  vec.insert(vec.begin() + 3, 8);  // insert 8 at index 3
  /* if index is not exist then insert function will not be worked */
  cout << "all values in vec after insert: ";
  for (int val : vec) {
    cout << val << " ";
  }
  cout << endl;

  // clear function in vector
  vec.clear();
  cout << "all values in vec after clear all element: ";
  for (int val : vec) {
    cout << val << " ";
  }
  cout << endl;
  /* clear function only delete its all elements but not its actual capacity */
  cout << "capacity of vec after clear all element: " << vec.capacity() << endl;

  // empty function in vector
  vec.clear();
  cout << "is empty: " << vec.empty() << endl;

  return 0;
}
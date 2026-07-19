#include <iostream>
#include <vector>
using namespace std;

void reverseArray(int arr[], int sz) {
  int start = 0;
  int end = sz - 1;
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main() {
  vector<int> vec;               // this is an un-sized array
  vector<int> vec2 = {1, 2, 3};  // this is 3 size array
  vector<char> vec3(5, 'a');  // this is 5 size array with all elements are 'a'

  ///// calculate size and print elements /////
  cout << "the size of vec: " << vec.size() << endl;

  cout << "the size of vec2 = {1, 2, 3}: " << vec2.size() << endl;

  cout << "the size and all elements of vec3(5, 0): " << vec3.size() << endl;
  for (char allValues : vec3) {  // this is for each loop of vector
    cout << allValues << " ";
  }
  cout << endl;
  cout << "--------------------------------";
  cout << endl;

  ///// push-back (insert) function for vectors /////
  cout << "the size of vec (un-sized array) before push is: " << vec.size()
       << endl;
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(-1);
  vec.push_back(4);

  cout << "the size of vec after push {2, 3, -1, 4} is: " << vec.size() << endl;
  cout << "elements are: ";
  for (int allValues : vec) {  // this is for each loop of vector
    cout << allValues << " ";
  }
  cout << endl;
  cout << "--------------------------------";
  cout << endl;

  ///// pop-back (delete) function for vectors /////
  cout << "the size of vec2 before pop-back (delete): " << vec2.size() << endl;
  cout << "elements are: ";
  for (int allValues : vec2) {  // this is for each loop of vector
    cout << allValues << " ";
  }
  cout << endl;

  vec2.pop_back();
  cout << "the size of vec2 after pop-back (delete) the last element is: "
       << vec2.size() << endl;
  cout << "elements are: ";
  for (int allValues : vec2) {  // this is for each loop of vector
    cout << allValues << " ";
  }
  cout << endl;
  cout << "--------------------------------";
  cout << endl;

  ///// print front value /////
  cout << "the front value of vec3(5, 'a') is : " << vec3.front();
  cout << endl;
  cout << "--------------------------------";
  cout << endl;

  ///// print back value /////
  cout << "the back value of vec3(5, 'a') is: " << vec3.back();
  cout << endl;
  cout << "--------------------------------";
  cout << endl;

  ///// print particular(at) value /////
  cout << "the value of 3th position of vec3(5, 'a') is: " << vec3.at(2);
  cout << endl;
  cout << "--------------------------------";
  cout << endl;

  return 0;
}
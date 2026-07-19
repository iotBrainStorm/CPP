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
  vector<int> vec;
  int input;
  int unique = 0;
  cout << "please enter 5 numbers (one must be unique)" << endl;

  cout << "please first element: ";
  cin >> input;
  vec.push_back(input);

  cout << "please second element: ";
  cin >> input;
  vec.push_back(input);

  cout << "please third element: ";
  cin >> input;
  vec.push_back(input);

  cout << "please fourth element: ";
  cin >> input;
  vec.push_back(input);

  cout << "please fifth element: ";
  cin >> input;
  vec.push_back(input);

  cout << "your vector is: ";
  for (int val : vec) {
    cout << val << " ";
  }

  cout << endl;

  cout << "the unique number of your vector is: ";
  for (int val : vec) {
    unique = unique ^ val;
  }
  cout << unique << endl;

  return 0;
}
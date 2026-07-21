#include <algorithm>  // must include this library for sort
#include <iostream>
using namespace std;

int findMajority(int arr[], int size) {
  sort(arr, arr + size);  // inbuild ascending order sorting function
  int freq = 1;           // atleast one time exist, this is important
  int ans = arr[0];       // assume that ans is first element

  for (int i = 1; i < size; i++) {
    if (arr[i] == arr[i - 1]) {
      freq++;
    } else {
      freq = 1;
      ans = arr[i];
    }

    if (freq > (size / 2)) {
      return ans;
    }
  }
  return -1;  // it means no majority element is found
}

int main() {
  int size = 5;
  int arr[size];
  int target;

  cout << "please enter 5 numbers to find majority" << endl;
  for (int i = 0; i < size; i++) {
    cout << "please enter " << i << " element: ";
    cin >> arr[i];
  }

  cout << "your original array is: [ ";
  for (int i = 0; i < size; i++) {
    cout << arr[i];
    if (i != size - 1) {
      cout << ", ";
    }
  }
  cout << " ]" << endl;

  target = findMajority(arr, size);
  cout << "majority element is: " << target << endl;
  return 0;
}
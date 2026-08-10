#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/*
target is basically to find out next larger number

step1: find the pivot number which is A[i] < A[i + 1] from the last
step2: find the right most element which is just greater than pivot
step3: swap(right most element, pivot)
step4: reverse the all elements from (pivot+1) to (n-1) for decreasing to increasing order

ex: find the next larger number of 12543 ?
step1: pivot = 2
step2: right most element which is just greater than pivot = 3
step3: after swap RME and pivot = 13542
step4; reverse the number between (pivot+1) to (n-1) = 13245

*/

void nextLargerNumber(vector<int> &arr) {
  // step1: find the pivot
  int pivot = -1;
  int n = arr.size();
  for (int i = n - 2; i >= 0; i--) {
    if (arr[i] < arr[i + 1]) {
      pivot = i;
      break;
    }
  }

  if (pivot == -1) { // optional
    reverse(arr.begin(), arr.end());
    return;
  }

  // step2: find the right most element which is greater than pivot
  for (int i = n - 1; i > pivot; i--) {
    if (arr[i] > arr[pivot]) {
      swap(arr[i], arr[pivot]); // step3
      break;
    }
  }

  // step3: reverse (pivot+1) to (n-1)
  int i = pivot + 1, j = n - 1;
  while (i <= j) {
    swap(arr[i], arr[j]);
    i++;
    j--;
    // swap(arr[i++], arr[j--]);
  }
}

int main() {
  vector<int> arr;
  int element;
  int size;

  cout << "please enter the length of the array, where your given number be "
          "stored: ";
  cin >> size;

  cout << "please enter all the digits one by one: " << endl;
  for (int i = 0; i < size; i++) {
    cin >> element;
    arr.push_back(element);
  }

  cout << "your number is like: ";
  for (int val : arr) {
    cout << val;
  }
  cout << endl;

  nextLargerNumber(arr);

  cout << "the next larger number of your given number is: ";
  for (int val : arr) {
    cout << val;
  }
  cout << endl;

  return 0;
}
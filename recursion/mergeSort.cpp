/*
ex1:
please enter the length of your array for sorting: 8
please enter 1 element: 45
please enter 2 element: 5
please enter 3 element: 6
please enter 4 element: -89
please enter 5 element: 0
please enter 6 element: -56
please enter 7 element: 78
please enter 8 element: 23
your original array is like: [  45  5  6  -89  0  -56  78  23  ]
your sorted array is like: [  -89  -56  0  5  6  23  45  78  ]

ex2:
please enter the length of your array for sorting: 5
please enter 1 element: 1
please enter 2 element: 1
please enter 3 element: 1
please enter 4 element: 1
please enter 5 element: 1
your original array is like: [  1  1  1  1  1  ]
your sorted array is like: [  1  1  1  1  1  ]

 */

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end) {
  vector<int> temp;
  int i = st, j = mid + 1;

  while (i <= mid && j <= end) {
    if (arr[i] <= arr[j]) {
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      j++;
    }
  }

  while (i <= mid) {
    temp.push_back(arr[i]);
    i++;
  }

  while (j <= end) {
    temp.push_back(arr[j]);
    j++;
  }

  for (int idx = 0; idx < temp.size(); idx++) {
    arr[idx + st] = temp[idx];
  }
}

void mergeSort(vector<int> &arr, int st, int end) {
  if (st < end) {
    int mid = st + (end - st) / 2;
    mergeSort(arr, st, mid);      // left half
    mergeSort(arr, mid + 1, end); // right half
    merge(arr, st, mid, end);
  }
}

int main() {
  vector<int> arr;
  int length;

  cout << "please enter the length of your array for sorting: ";
  cin >> length;

  int element;
  for (int i = 0; i < length; i++) {
    cout << "please enter " << i + 1 << " element: ";
    cin >> element;
    arr.push_back(element);
  }

  cout << "your original array is like: [  ";
  for (int val : arr) {
    cout << val << "  ";
  }
  cout << "]" << endl;

  mergeSort(arr, 0, arr.size() - 1);

  cout << "your sorted array is like: [  ";
  for (int val : arr) {
    cout << val << "  ";
  }
  cout << "]" << endl;

  return 0;
}

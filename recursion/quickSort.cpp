/*
ex1:
please enter the length of your array for quick sorting: 8
please enter 1 element: 0
please enter 2 element: -45
please enter 3 element: -9
please enter 4 element: 67
please enter 5 element: 4
please enter 6 element: 2
please enter 7 element: 89
please enter 8 element: -56
your original array is like: [  0  -45  -9  67  4  2  89  -56  ]
your sorted array is like: [  -56  -45  -9  0  2  4  67  89  ]

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

int partition(vector<int> &arr, int st, int end) {
  int idx = st - 1, pivot = arr[end];

  for (int j = st; j < end; j++) { // moves the smaller values (smaller than pivot) to the left
    if (arr[j] <= pivot) {
      idx++;
      swap(arr[j], arr[idx]);
    }
  }
  idx++;
  swap(arr[end], arr[idx]);
  return idx;
}

void quickSort(vector<int> &arr, int st, int end) {
  if (st < end) {
    int pivIdx = partition(arr, st, end);
    quickSort(arr, st, pivIdx - 1);  // create left partition
    quickSort(arr, pivIdx + 1, end); // create right partition
  }
}

int main() {
  vector<int> arr;
  int length;

  cout << "please enter the length of your array for quick sorting: ";
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

  quickSort(arr, 0, arr.size() - 1);

  cout << "your sorted array is like: [  ";
  for (int val : arr) {
    cout << val << "  ";
  }
  cout << "]" << endl;

  return 0;
}

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// 0s = red
// 1s = blue
// 2s = green

/*

0s => 0 to (low - 1)
1s => low to (mid - 1)
un-sorted part => mid to (high - 1)
2s => high to (n - 1)

*/

void DNF_Sort(vector<int>& arr) {
  int n = arr.size();
  int low = 0, mid = 0, high = n - 1;
  while (mid <= high) {
    if (arr[mid] == 0) {
      swap(arr[low], arr[mid]);
      low++;
      mid++;
    } else if (arr[mid] == 1) {
      mid++;
    } else {
      swap(arr[high], arr[mid]);
      high--;
    }
  }
}

int main() {
  vector<int> colourArr;
  int length;
  int colour;

  cout << "please enter the length of your un-sorted colour array: ";
  cin >> length;
  cout << "please enter the three colours one by one in the form of 0, 1 and 2"
       << endl;

  colourArr.clear();

  for (int i = 0; i < length; i++) {
    cin >> colour;
    colourArr.push_back(colour);
  }

  cout << "your un-sorted array is like: ";
  for (int val : colourArr) {
    cout << val << " ";
  }
  cout << endl;

  DNF_Sort(colourArr);

  cout << "your sorted array is: ";
  for (int val : colourArr) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
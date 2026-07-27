#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// 0 = red
// 1 = blue
// 2 = green

void sortColours(vector<int>& arr) {
  int length = arr.size();
  int redCount = 0, blueCount = 1, greenCount = 2;

  for (int i = 0; i < length; i++) {
    if (arr[i] == 0) {
      redCount++;
    } else if (arr[i] == 1) {
      blueCount++;
    } else {
      greenCount++;
    }
  }

  int idx = 0;
  for (int i = 0; i < redCount; i++) {
    arr[idx++] = 0;  // red
  }
  for (int i = 0; i < blueCount; i++) {
    arr[idx++] = 1;  // blue
  }
  for (int i = 0; i < greenCount; i++) {
    arr[idx++] = 2;  // green
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

  sortColours(colourArr);

  cout << "your sorted array is: ";
  for (int val : colourArr) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
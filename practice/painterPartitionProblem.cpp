#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>& arr, int maxPainters, int maxTime) {
  int painters = 1;
  int time = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (time + arr[i] <= maxTime) {
      time += arr[i];
    } else {
      painters++;
      time = arr[i];
    }
  }

  return painters <= maxPainters ? true : false;
}

int minTimeToPaint(vector<int>& arr, int painters) {
  int sum = 0;
  int maxVal = 0;

  for (int i = 0; i < arr.size(); i++) {
    sum += arr[i];
    maxVal = max(maxVal, arr[i]);
  }

  int st = maxVal, end = sum, ans = -1;

  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (isPossible(arr, painters, mid)) {  // valid case
      ans = mid;
      end = mid - 1;  // left shift
    } else {          // invalid case
      st = mid + 1;   // right shift
    }
  }
  return ans;
}

int main() {
  vector<int> length;

  int lengths;
  int vectorSize;
  int painters;
  cout << "please enter array length: ";
  cin >> vectorSize;
  cout << "please enter the number of painters: ";
  cin >> painters;

  cout << "please enter the lengths one by one" << endl;

  length.clear();

  for (int i = 0; i < vectorSize; i++) {
    cin >> lengths;
    length.push_back(lengths);
  }

  cout << "your lengths are: ";
  for (float val : length) {
    cout << val << " ";
  }
  cout << endl;

  cout << "minimum time is to be taken : " << minTimeToPaint(length, painters)
       << endl;

  return 0;
}
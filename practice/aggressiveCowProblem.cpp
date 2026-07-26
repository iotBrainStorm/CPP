#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>& arr, int givenCows, int minDis) {
  int cows = 1;
  int lastDis = arr[0];
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] - lastDis >= minDis) {
      cows++;
      lastDis = arr[i];
    }
    if (cows == givenCows) {
      return true;
    }
  }

  return false;
}

int getMaxPossibleDistance(vector<int>& arr, int cows) {
  sort(arr.begin(), arr.end());
  int st = 1, end = arr[arr.size() - 1] - arr[0], ans = -1;

  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (isPossible(arr, cows, mid)) {  // valid case
      ans = mid;
      st = mid + 1;   // left shift
    } else {          // invalid case
      end = mid - 1;  // right shift
    }
  }
  return ans;
}

int main() {
  vector<int> stall;

  int length;
  int vectorSize;
  int cows;
  cout << "please enter stall array length: ";
  cin >> vectorSize;
  cout << "please enter the number of cows: ";
  cin >> cows;

  cout << "please enter the length one by one" << endl;

  stall.clear();

  for (int i = 0; i < vectorSize; i++) {
    cin >> length;
    stall.push_back(length);
  }

  cout << "your stall lengths are: ";
  for (float val : stall) {
    cout << val << " ";
  }
  cout << endl;

  cout << "maximum possible distance for aggressive cows is: "
       << getMaxPossibleDistance(stall, cows) << endl;

  return 0;
}
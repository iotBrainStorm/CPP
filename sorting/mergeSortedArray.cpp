#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void mergeArr(vector<float>& arr1, vector<float>& arr2) {
  int m = arr1.size();  // for arr1
  int n = arr2.size();  // for arr2
  int idx = m - 1;
  int i = m - n - 1;  // for arr1
  int j = n - 1;      // for arr2

  while (i >= 0 && j >= 0) {
    if (arr1[i] >= arr2[j]) {
      arr1[idx] = arr1[i];
      idx--;
      i--;
    } else {
      arr1[idx] = arr2[j];
      idx--;
      j--;
    }
  }
  while (j >= 0) {
    arr1[idx] = arr2[j];
    idx--;
    j--;
  }
}

int main() {
  vector<float> arrA;
  vector<float> arrB;
  float element;
  int sizeA;
  int sizeB;

  cout << "please enter the length of your first sorted array: ";
  cin >> sizeA;
  cout << "please enter the length of your second sorted array: ";
  cin >> sizeB;

  cout << "please enter the elements into first array one by one: " << endl;

  // Read first array
  for (int i = 0; i < sizeA; i++) {
    cin >> element;
    arrA.push_back(element);
  }

  // Reserve extra space
  for (int i = 0; i < sizeB; i++) {
    arrA.push_back(0);
  }

  cout << "please enter the elements into second array one by one: " << endl;
  for (int i = 0; i < sizeB; i++) {
    cin >> element;
    arrB.push_back(element);
  }

  cout << "your first sorted array is like: ";
  for (float val : arrA) {
    cout << val << " ";
  }
  cout << endl;

  cout << "your second sorted array is like: ";
  for (float val : arrB) {
    cout << val << " ";
  }
  cout << endl;

  mergeArr(arrA, arrB);

  cout << "your merged sorted array is like: ";
  for (float val : arrA) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
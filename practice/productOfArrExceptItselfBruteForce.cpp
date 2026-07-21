#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<float> productOfArr(vector<float>& arr) {
  // vector<float> ans(arr.size(), 1);
  vector<float> ans;
  for (int i = 0; i < arr.size(); i++) {
    float product = 1.0;
    for (int j = 0; j < arr.size(); j++) {
      if (i != j) {
        product = product * arr[j];
      }
    }
    ans.push_back(product);
  }
  return ans;
}

int main() {
  vector<float> numbers;
  int vectorSize;
  float number;

  cout << "please enter total numbers of the array: ";
  cin >> vectorSize;
  cout << "now enter all the numbers one by one: " << endl;

  numbers.clear();
  for (int i = 0; i < vectorSize; i++) {
    cin >> number;
    numbers.push_back(number);
  }

  cout << "your numbers array is: ";
  for (float val : numbers) {
    cout << val << " ";
  }
  cout << endl;

  numbers = productOfArr(numbers);

  cout << "Product array: ";
  for (float val : numbers) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
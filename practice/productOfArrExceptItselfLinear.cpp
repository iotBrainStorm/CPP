#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// vector<float> productOfArr(vector<float>& arr) {
//   vector<float> ans(arr.size());
//   vector<float> prefix(arr.size(), 1);
//   vector<float> suffix(arr.size(), 1);

//   // Prefix
//   for (int i = 1; i < arr.size(); i++) {
//     prefix[i] = prefix[i - 1] * arr[i - 1];
//   }

//   // Suffix
//   for (int i = arr.size() - 2; i >= 0; i--) {
//     suffix[i] = suffix[i + 1] * arr[i + 1];
//   }

//   // Answer
//   for (int i = 0; i < arr.size(); i++) {
//     ans[i] = prefix[i] * suffix[i];
//   }

//   return ans;
// }

vector<float> productOfArr(vector<float>& arr) {
  int n = arr.size();
  vector<float> ans(n, 1);

  // Store prefix products in ans
  for (int i = 1; i < n; i++) {
    ans[i] = ans[i - 1] * arr[i - 1];
  }

  // Multiply by suffix products
  float suffixProduct = 1;
  for (int i = n - 1; i >= 0; i--) {
    ans[i] *= suffixProduct;
    suffixProduct *= arr[i];
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
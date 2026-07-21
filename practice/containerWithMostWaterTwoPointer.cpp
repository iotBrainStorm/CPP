#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

float maxWater(vector<float>& waterHeights) {
  float maxWater = 0.0;
  int left = 0;
  int right = waterHeights.size() - 1;

  while (left < right) {
    int wd = right - left;
    float ht = min(waterHeights[left], waterHeights[right]);
    float currWater = wd * ht;
    maxWater = max(maxWater, currWater);
    if (waterHeights[left] < waterHeights[right]) {
      left++;
    } else {
      right--;
    }
  }
  return maxWater;
}

int main() {
  vector<float> waterHeights;

  float height;
  int vectorSize;
  cout << "please enter number of water heights to calculate maximum water "
          "volume: ";
  cin >> vectorSize;
  cout << "now enter the heights one by one: " << endl;

  waterHeights.clear();
  for (int i = 0; i < vectorSize; i++) {
    cin >> height;
    waterHeights.push_back(height);
  }

  cout << "your container heights are: ";
  for (float val : waterHeights) {
    cout << val << " ";
  }
  cout << endl;

  cout << "maximum volume of your containers will be: "
       << maxWater(waterHeights) << endl;

  return 0;
}
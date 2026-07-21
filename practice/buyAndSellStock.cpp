#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

float maxProfit(vector<float>& priceList) {
  float maxProfit = 0.0;
  float bestBuy = priceList[0];
  for (int i = 1; i < priceList.size(); i++) {
    if (priceList[i] > bestBuy) {
      maxProfit = max(maxProfit, (priceList[i] - bestBuy));
    }
    bestBuy = min(bestBuy, priceList[i]);
  }
  return maxProfit;
}

int main() {
  vector<float> priceList;

  float price;
  int vectorSize;
  cout << "please enter number of prices: ";
  cin >> vectorSize;
  cout << "now enter the prices of your stocks one by one: " << endl;

  priceList.clear();
  for (int i = 0; i < vectorSize; i++) {
    cin >> price;
    priceList.push_back(price);
  }

  cout << "your price list is: ";
  for (float val : priceList) {
    cout << val << " ";
  }
  cout << endl;

  cout << "your maximum profit should be: " << maxProfit(priceList) << endl;

  return 0;
}
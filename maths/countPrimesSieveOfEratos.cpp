/*
 * sieve of eratosthenes process
 * here we will find all the prime numbers in a given range
 * in this process, first we assume all numbers in given range is prime => assign true (here 0, 1 will be skipped)
 * next we will travel all the numbers and its factors also => assign false
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> countPrimes(int range) {
  vector<int> ans;
  vector<bool> isPrime(range + 1, true); // set all the index value true initially
  int count = 0;
  for (int i = 2; i <= range; i++) { // 0 and 1 are skipped
    if (isPrime[i]) {
      count++;
      ans.push_back(i);
      for (int j = i * 2; j <= range; j = j + i) { // to travel all the factors of a number (i)
        isPrime[j] = false;                        // assign the factor to false, because any factor of a number can't be prime
      }
    }
  }
  return ans;
}

int main() {
  int range;
  vector<int> ans;

  cout << "please enter a range to find the prime numbers: ";
  cin >> range;
  ans = countPrimes(range);

  cout << "total: " << ans.size() << endl;
  cout << "numbers are: ";
  for (int val : ans) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
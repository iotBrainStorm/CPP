/*
 * check any permutation of a given string is exist or not, in another given string
 * all characters will be 'a' to 'z' (26 characters)
 * ex: str1 = "ab", str2 = "eidbaooo" => true
 * ex: str1 = "ab", str2 = "eidboaoo" => false
 */

#include <iostream>
using namespace std;

bool isFreqSame(int segFreq[26], int winFreq[26]) {
  for (int i = 0; i < 26; i++) {
    if (segFreq[i] != winFreq[i]) {
      return false;
    }
  }
  return true;
}

bool checkInclusion(string mainPart, string segment) {

  int segFreq[26] = {0};
  for (int i = 0; i < segment.length(); i++) {
    int idx = segment[i] - 'a';
    segFreq[idx]++;
  }

  int windowSize = segment.length();
  int mainPartSize = mainPart.length();

  for (int i = 0; i < mainPart.length(); i++) {
    int winFreq[26] = {0};
    for (int j = i; j < i + windowSize && j < mainPartSize; j++) {
      int idx = mainPart[j] - 'a';
      winFreq[idx]++;
    }
    if (isFreqSame(segFreq, winFreq)) {
      return true;
    }
  }
  return false;
}

int main() {
  string main, seg;

  cout << "please enter main string: ";
  cin >> main;
  cout << "please enter segment for search: ";
  cin >> seg;

  if (checkInclusion(main, seg)) {
    cout << seg << " found in " << main << endl;
  } else {
    cout << seg << " not found in " << main << endl;
  }

  return 0;
}
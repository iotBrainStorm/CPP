/*
 * reverse the words in a given sentence
 * ex: i love my india => india my love i
 */

#include <algorithm>
#include <iostream>
using namespace std;

string reverseWord(string str) {
  int n = str.length();
  string ans = "";

  reverse(str.begin(), str.end());

  for (int i = 0; i < n; i++) {
    string word = "";
    while (i < n && str[i] != ' ') {
      word += str[i];
      i++;
    }
    reverse(word.begin(), word.end());
    if (word.length() > 0) {
      ans += ' ' + word;
    }
  }
  return ans.substr(1); // remove starting space at index 0
}

int main() {
  string sentence;

  cout << "please enter a sentence for reverse: ";
  getline(cin, sentence);
  cout << "reverse sentence is: " << reverseWord(sentence) << endl;

  return 0;
}
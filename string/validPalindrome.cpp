/*
 * only check alpha-numeric
 * ignore special character
 * ignore case sensitive
 * ex: Ac3?e3c&a is valid palindrome
 */

#include <iostream>
using namespace std;

bool isAlphaNum(char ch) {
  if (ch >= '0' && ch <= '9' || tolower(ch) >= 'a' && tolower(ch) <= 'z') {
    return true;
  }
  return false;
}

bool isPalindrome(string phrase) {
  int st = 0, end = phrase.length() - 1;
  while (st < end) {
    if (!isAlphaNum(phrase[st])) {
      st++;
      continue;
    }
    if (!isAlphaNum(phrase[end])) {
      end--;
      continue;
    }

    if (tolower(phrase[st]) != tolower(phrase[end])) {
      return false;
    }
    st++;
    end--;
  }
  return true;
}

int main() {
  string word;

  cout << "please enter a word to check palindrome: ";
  cin >> word;
  // getline(cin, word); // for avoid whitespace

  if (isPalindrome(word)) {
    cout << word << " is palindrome" << endl;
  } else {
    cout << word << " isn't palindrome" << endl;
  }

  return 0;
}
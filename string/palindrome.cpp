#include <iostream>
using namespace std;

bool isPalindrome(string word) {
  int n = word.length();
  int st = 0, end = n - 1;
  while (st < end) {
    if (word[st] != word[end]) {
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

  if (isPalindrome(word)) {
    cout << word << " is palindrome" << endl;
  } else {
    cout << word << " isn't palindrome" << endl;
  }

  return 0;
}
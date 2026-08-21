/*
ex1:
please enter your string to find out all possible palindrome partitions: aaa
total number of possible solutions: 4
solutions are:
  [ a a a ]
  [ a aa ]
  [ aa a ]
  [ aaa ]

ex2:
please enter your string to find out all possible palindrome partitions: racecar
total number of possible solutions: 4
solutions are:
  [ r a c e c a r ]
  [ r a cec a r ]
  [ r aceca r ]
  [ racecar ]

ex3:
please enter your string to find out all possible palindrome partitions: madam
total number of possible solutions: 3
solutions are:
  [ m a d a m ]
  [ m ada m ]
  [ madam ]

ex4:
please enter your string to find out all possible palindrome partitions: solos
total number of possible solutions: 3
solutions are:
  [ s o l o s ]
  [ s olo s ]
  [ solos ]

 */

#include <iostream>
#include <vector>
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

void getAllParts(string s, vector<string> &partitions, vector<vector<string>> &ans) {

  if (s.size() == 0) {
    ans.push_back({partitions});
    return;
  }

  for (int i = 0; i < s.size(); i++) {
    string part = s.substr(0, i + 1);
    if (isPalindrome(part)) {
      partitions.push_back(part);
      getAllParts(s.substr(i + 1), partitions, ans);
      partitions.pop_back();
    }
  }
}

vector<vector<string>> partition(string s) {
  vector<vector<string>> ans;
  vector<string> partitions;
  getAllParts(s, partitions, ans);
  return ans;
}

int main() {
  string s;
  vector<vector<string>> result;

  cout << "please enter your string to find out all possible palindrome partitions: ";
  cin >> s;
  result = partition(s);

  cout << "total number of possible solutions: " << result.size() << endl;
  cout << "solutions are:" << endl;
  for (auto row : result) {
    cout << "  [ ";
    for (auto cell : row) {
      cout << cell << " ";
    }
    cout << "]" << endl;
  }
  return 0;
}

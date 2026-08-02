/*
 * remove a sub-string from a given string from left if possible
 * ex: mainStr = "daabcbaabcbc", subStr = "abc"
 * "daabcbaabcbc" => "dabaabcbc" => "dababc" => "dab"
 * so the final ans is "dab"
 */

#include <iostream>
using namespace std;

string removeOccurrences(string mainStr, string subStr) {
  string ans;
  if (mainStr.find(subStr) < mainStr.length()) { // find() return a valid index if exist from left, otherwise it returns non-valid index
    ans = mainStr.erase(mainStr.find(subStr), subStr.length());
    ans = removeOccurrences(ans, subStr); // to continue the process, this function call itself until all subStr are removed
    return ans;
  }
  return mainStr;
}

int main() {
  string main, sub;

  cout << "to remove occurrences please enter your main string: ";
  cin >> main;
  cout << "now please enter your sub-string: ";
  cin >> sub;

  cout << "ans is: " << removeOccurrences(main, sub) << endl;

  return 0;
}
/*
 * compress the repeated chars inside a characters array
 * ex: ['a', 'a', 'b', 'b', 'b', 'a', 'c', 'c'] => ['a', '2', 'b', '3', 'a', 'c', '2']
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char> &chars) {
  int n = chars.size();
  int idx = 0; // to track all individual char one by one

  for (int i = 0; i < n; i++) {
    char ch = chars[i];               // to track repeated chars
    int count = 0;                    // to store, how many times the char is repeated
    while (i < n && chars[i] == ch) { // check current char is same or not, with previous char
      count++;
      i++; // for next char
    }

    if (count == 1) {  // 1 means no repetition
      chars[idx] = ch; // just replace with same char
      idx++;           // for next individual char
    } else {
      chars[idx] = ch;
      idx++;
      string str = to_string(count); // convert the number of repetition into string
      for (char digit : str) {       // convert the string(number) into char(digit)
        chars[idx] = digit;          // replace the digit in proper index
        idx++;                       // for next individual char
      }
    }
    i--; // for one step backward, this is important
  }
  chars.resize(idx); // to pick the compressed characters only, rest are eliminated
  return idx;        // return the compressed size
}

int main() {
  vector<char> chars;
  int size;

  cout << "what is the size of your characters array: ";
  cin >> size;
  chars.resize(size);

  cout << "please enter all the characters one by one" << endl;

  for (int i = 0; i < size; i++) {
    cout << "please enter " << i + 1 << " char: ";
    cin >> chars[i];
  }
  cout << endl;

  cout << "your original characters array is: ";
  for (int i = 0; i < size; i++) {
    cout << chars[i];
  }
  cout << endl;
  cout << "before compression size is: " << chars.size() << endl;

  cout << "-------------------------------------------" << endl;

  int compressSize = compress(chars);
  cout << "your compressed characters are like: ";
  for (char ch : chars) {
    cout << ch;
  }
  cout << endl;
  cout << "after compression size is: " << compressSize << endl;

  return 0;
}
/*
1000 -> M
900  -> CM
500  -> D
400  -> CD
100  -> C
90   -> XC
50   -> L
40   -> XL
10   -> X
9    -> IX
5    -> V
4    -> IV
1    -> I

ex: 3749 => MMMDCCXLIX
3749 - 1000 = 2749 → M
2749 - 1000 = 1749 → M
1749 - 1000 =  749 → M
 749 - 500  =  249 → D
 249 - 100  =  149 → C
 149 - 100  =   49 → C
  49 - 40   =    9 → XL
   9 - 9    =    0 → IX

 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

string intToRoman(int num) {
  int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  string result = "";
  for (int i = 0; i < 13; i++) {
    while (num >= values[i]) {
      result += symbols[i];
      num = num - values[i];
    }
  }
  return result;
}

int main() {
  int number;

  cout << "please enter a number to convert it roman: ";
  cin >> number;

  cout << number << " => " << intToRoman(number);

  return 0;
}

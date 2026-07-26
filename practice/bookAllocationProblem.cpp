#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>& arr, int maxStudents, int maxPages) {
  int students = 1;
  int pages = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > maxPages) {
      return false;
    }
    if (pages + arr[i] <= maxPages) {
      pages += arr[i];
    } else {
      students++;
      pages = arr[i];
    }
  }

  if (students > maxStudents) {
    return false;
  } else {
    return true;
  }
  // return students > maxStudents ? false : true;
}

int allocatedBooks(vector<int>& arr, int stu) {
  if (stu > arr.size()) {  // number of students is greater than number of books
    return -1;
  }

  int minPages = 0;  // start point of binary search
  int maxPages = 0;

  for (int i = 0; i < arr.size(); i++) {
    maxPages += arr[i];  // end point of binary search
  }

  int ans = -1;
  while (minPages <= maxPages) {
    int mid = minPages + (maxPages - minPages) / 2;

    if (isValid(arr, stu, mid)) {  // valid case
      ans = mid;
      maxPages = mid - 1;  // left shift
    } else {               // invalid case
      minPages = mid + 1;  // right shift
    }
  }
  return ans;
}

int main() {
  vector<int> book;

  int pages;
  int vectorSize;
  int students;
  cout << "please enter array length: ";
  cin >> vectorSize;
  cout << "please enter student numbers: ";
  cin >> students;

  cout << "please enter the pages one by one" << endl;

  book.clear();
  for (int i = 0; i < vectorSize; i++) {
    cin >> pages;
    book.push_back(pages);
  }

  cout << "your book pages are: ";
  for (float val : book) {
    cout << val << " ";
  }
  cout << endl;

  cout << "minimum allocation for maximum pages is: "
       << allocatedBooks(book, students) << endl;

  return 0;
}
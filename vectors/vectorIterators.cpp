#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {2, 5, 9, 3, 0, 7, 8, 10};

  // print begining point
  cout << "begining element is: " << *(vec.begin()) << endl;

  // print ending point
  cout << "ending element is: " << *(vec.end()) << endl;
  /* it gives garbage value because it does not point the exactly end point*/

  // create iterator (vector loop)
  cout << "all elements in vector are: ";
  vector<int>::iterator i;
  for (i = vec.begin(); i != vec.end(); i++) {
    cout << *(i) << " ";
  }
  cout << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string k;

  cin >> n >> k;

  // Sequence A
  if (k == "a" || k == "A") {

    // Number Error
    if (n <= 0) {
      cout << "Invalid Input";
    }

    int a = 2;
    while (n--) {
      cout << a << "/3 ";
      if (n != 0) {
        cout << "+ ";
      }
      a += 3;
    }
  }

  // Sequence B
  else if (k == "b" || k == "B") {

    // Number Error
    if (n <= 0) {
      cout << "Invalid Input";
    }

    int a = 1;
    int b = 3;
    while (n--) {
      cout << a << "/y^3 ";
      if (n != 0) {
        cout << "+ ";
      }

      a += b;
      b += 2;
    }
  }

  // Character Error
  else {
    cout << "Invalid Input";
  }
  return 0;
}
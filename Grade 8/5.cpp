#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {

    string t1;
    int pts = 0, loop1 = 4;
    cout << "Input for candidate " << i + 1 << ": ";

    while (loop1--) {
      cin >> t1;
      if (t1 == "P") {
        pts += 5;
      } else if (t1 == "F") {
        pts += 8;
      } else if (t1 == "U") {
        pts += 0;
      }
    }

    bool pass;
    if (pts >= 18) {
      pass = true;
    } else {
      pass = false;
    }
    if (i == 0) {
      cout << "Candidate Score Selected\n";
    }

    cout << i + 1 << " " << pts << " " << pass << endl;

  }

  return 0;
}

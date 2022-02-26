#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n * n; i++) {

    if (sqrt(i) == (int) sqrt(i)) {
      cout << "1/" << i;
      if (i != n * n) {
        cout << " + ";
      }
    }

  }

  cout << "\n\n";
  return 0;
}

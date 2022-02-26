#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 3;
  while (t--) {
    int n;
    cin >> n;

    if (n % 5 == 0 && n % 8 == 0) {
      cout << n * 2 << " Amount doubled\n";
    } else {
      cout << "Amount Not doubled\n";
    }
  }

  return 0;
}

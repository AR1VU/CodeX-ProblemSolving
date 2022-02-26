#include <bits/stdc++.h>
using namespace std;

bool Vowel(char ch) {
  switch (ch) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    return true;
  default:
    return false;
  }
}

int Pairs(string m, int n) {
  int ans = 0;
  for (int j = 0; j < n - 1; j++) {
    if (Vowel(m[j]) && Vowel(m[j + 1]))
      ans++;
  }

  cout << "Number of pair of vowels: " << ans << "\n\n";
}

int main() {
 
  string m;
  cin >> m;
  int n = m.length();
  Pairs(m, n);

  return 0;
}

 

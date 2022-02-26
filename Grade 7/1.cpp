#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;

  cout << "Enter average height of 6 boys: ";
  cin >> n;

  cout << "Enter average height of 7 boys: ";
  cin >> k;

  int ans = (k * 7) - (n * 6);
  cout << "\nThe height of the seventh boy is " << ans << " cm";
  return 0;
}
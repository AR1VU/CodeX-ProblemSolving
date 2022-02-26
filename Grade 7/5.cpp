#include <bits/stdc++.h>
using namespace std;

int main() {
  int num;
  cin >> num;

  int sum;
  for (int i = 1; i <= num; ++i) {
    if (num % i == 0) {
      sum += i;
    }
  }
  sum -= num;

  if (sum == num) {
    cout << "Ergo";
  } else if (sum > num) {
    cout << "Carpe";
  } else if (sum < num) {
    cout << "Waflle";
  }

  if (num <= 0) {
    cout << "Invalid Input";
  }
  return 0;
}
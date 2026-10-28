#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 0, m = 0;
  int count = 0;
  cin >> n >> m;
  if (n == m) {
    cout << 0 << endl;
  } else {
    if (m % n != 0) {
      cout << -1 << endl;
    } else {
      int quotient = m / n;
      while (quotient % 2 == 0) {
        quotient /= 2;
        count++;
      }
      while (quotient % 3 == 0) {
        quotient /= 3;
        count++;
      }
      if (quotient == 1) {
        cout << count << endl;
      } else {
        cout << -1 << endl;
      }
    }
  }

  return 0;
}
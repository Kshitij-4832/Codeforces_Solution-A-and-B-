#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, t;
  cin >> s >> t;
  int n1 = s.length(), n2 = t.length();
  int x = 0, y = 0;
  for (int i = n1 - 1, j = n2 - 1; i >= 0 && j >= 0; i--, j--) {
    if (s[i] == t[j]) {
      x++;
      y++;
    } else {
      break;
    }
  }
  cout << n1 + n2 - (x + y) << endl;
  return 0;
}
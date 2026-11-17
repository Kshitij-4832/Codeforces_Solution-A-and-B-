
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int ans = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;

      if (i == j) {
        ans = (ans + x) % 2;
      }
    }
  }

  int queries;
  cin >> queries;

  string res = "";

  while (queries--) {
    int type;
    cin >> type;

    if (type == 1 || type == 2) {
      int i;
      cin >> i;
      ans = (ans + 1) % 2;
    } else if (type == 3) {
      res.push_back('0' + ans);
    }
  }

  cout << res << '\n';

  return 0;
}

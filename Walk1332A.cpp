#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 0;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int a = 0, b = 0, c = 0, d = 0;
    cin >> a >> b >> c >> d;
    int u = 0, v = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    cin >> u >> v >> x1 >> y1 >> x2 >> y2;
    int finalx = u - a + b;
    int finaly = v - c + d;
    if ((x1 <= finalx && x2 >= finalx) && (y1 <= finaly && y2 >= finaly) &&
        (a + b == 0 || x1 < x2) && (c + d == 0 || y1 < y2)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
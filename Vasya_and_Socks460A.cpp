#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0, m = 0;
  cin >> n >> m;
  int sum = 0;
  while (n > 0) {
    sum = sum + min(n, m);
    n = n - (m - 1);
  }
  cout << sum << endl;
  return 0;
}
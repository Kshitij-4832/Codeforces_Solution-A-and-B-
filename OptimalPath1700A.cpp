#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 0;
  cin >> t;
  while (t--) {
    long long int n = 0, m = 0;
    cin >> n >> m;
    long long int sum = ((m * n + m * n * n) / 2) + ((m * (m + 1)) / 2) - m;
    cout << sum << endl;
  }
  return 0;
}
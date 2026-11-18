#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 0;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    long long int u = 0, v = 0;
    cin >> u >> v;
    cout << (-1) * u * u << " " << v * v << endl;
  }
  return 0;
}
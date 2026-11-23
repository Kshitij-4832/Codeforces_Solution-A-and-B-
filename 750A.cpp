#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0, k = 0;
  cin >> n >> k;
  int rest = 240 - k;
  int count = 0, i = 1;
  while (count <= n && rest > 0 && (5 * i) <= rest) {
    rest -= (5 * i);
    i++;
    count++;
    if (count > n) {
      count--;
    }
  }
  cout << count << endl;
  return 0;
}
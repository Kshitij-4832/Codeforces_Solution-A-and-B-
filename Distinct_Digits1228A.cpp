#include <bits/stdc++.h>
using namespace std;
int main() {
  int l = 0, r = 0;
  cin >> l >> r;
  bool check = false;
  for (int i = l; i <= r; i++) {
    unordered_map<int, int> mpp;
    int temp = i;
    check = true;
    while (temp != 0) {
      if (mpp.find(temp % 10) != mpp.end()) {
        check = false;
        break;
      } else {
        mpp[temp % 10]++;
        temp = temp / 10;
      }
    }
    if (check) {
      cout << i << endl;
      break;
    }
  }
  if (!check) {
    cout << -1 << endl;
  }
  return 0;
}
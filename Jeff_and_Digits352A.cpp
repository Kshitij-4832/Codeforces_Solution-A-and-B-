#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0;
  cin >> n;
  vector<int> nums(n, 0);
  int fives = 0, zeros = 0;
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    if (nums[i] == 0) {
      zeros++;
    } else {
      fives++;
    }
  }
  if (zeros == 0) {
    cout << "-1" << endl;
  } else {
    int count = fives - (fives % 9);
    if (count % 9 == 0 && count != 0) {
      for (int i = 0; i < count; i++) {
        cout << "5";
      }
      for (int i = 0; i < zeros; i++) {
        cout << "0";
      }
    } else {
      cout << "0";
    }
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 0;
  cin >> t;
  while (t--) {
    int n = 0;
    cin >> n;
    vector<int> weight;
    int pow = 2;
    for (int i = 0; i < n; i++) {
      weight.push_back(pow);
      pow = pow * 2;
    }
    int result = weight[weight.size() - 1];
    for (int i = weight.size() - 2; i >= (n / 2) - 1; i--) {
      result = result - weight[i];
    }
    for (int i = 0; i < (weight.size() / 2) - 1; i++) {
      result = result + weight[i];
    }
    cout << result << endl;
  }
  return 0;
}

// 2 4 8 16 32 64
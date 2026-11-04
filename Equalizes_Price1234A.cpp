#include <bits/stdc++.h>
using namespace std;
int main() {
  int q = 0;
  cin >> q;
  int n = 0;
  for (int i = 0; i < q; i++) {
    cin >> n;
    long long int sum = 0;
    vector<int> query(n, 0);
    for (int j = 0; j < n; j++) {
      cin >> query[j];
      sum = sum + query[j];
    }
    double res = (double)sum / n;
    //cout << res<<endl;
    cout<<(int)ceil(res)<<endl;
    n = 0;
  }
  return 0;
}
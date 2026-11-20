#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0;
  cin >> n;
  vector<int> prices(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> prices[i];
  }
  int q = 0;
  cin >> q;
  sort(prices.begin(), prices.end());
  vector<int>queries(q,0);
  for (int i = 0; i < q; i++) {
    cin>>queries[i];
  }
  for(int i = 0;i<q;i++){
    int start = 0, end = prices.size();
    while (start < end) {
      int mid = start + (end - start) / 2;
      if (prices[mid] <= queries[i]) {
        start = mid + 1;
      } else {
        end = mid;
      }
    }
    cout << start << endl;
  }
  return 0;
}
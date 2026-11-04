#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main() {
  int n = 0;
  cin >> n;
  vector<int> prb;
  for (int i = 0; i < n; i++) {
    int inp = 0;
    cin >> inp;
    prb.push_back(inp);
  }
  unordered_set<int> st;
  for (int i = 0; i < n; i++) {
    st.insert(prb[i]);
  }
  sort(prb.begin(), prb.end());
  int k = 1, days = 0;

  for (int i = 0; i < n; i++) {
    if (prb[i] >= k) {
      k++;
      days++;
    }
  }
  cout << days << endl;
  return 0;
}
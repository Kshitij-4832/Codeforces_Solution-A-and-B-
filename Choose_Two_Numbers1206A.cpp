#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0;
  cin >> n;
  unordered_set<int> st;
  vector<int> A(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
    st.insert(A[i]);
  }
  int m = 0;
  cin >> m;
  vector<int> B(m, 0);
  for (int i = 0; i < m; i++) {
    cin >> B[i];
    st.insert(B[i]);
  }
  bool check = false;
  for (int i = 0; i < n && !check; i++) {
    for (int j = 0; j < m; j++) {
      if (st.find(A[i] + B[j]) == st.end()) {
        cout << A[i] << " " << B[j] << endl;
        check = true;
        break;
      }
    }
  }
  return 0;
}
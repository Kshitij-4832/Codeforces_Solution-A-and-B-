#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0;
  cin >> n;
  vector<vector<int>> matrix(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    matrix[0][i] = 1;
  }
  for (int i = 1; i < n; i++) {
    int prev = 0;
    for (int j = 0; j < n; j++) {
      if (j == 0) {
        matrix[i][j] = 1;
      } else {
        prev = prev + matrix[i - 1][j] + matrix[i][j - 1];
        matrix[i][j] = prev;
        prev = 0;
      }
    }
  }
  cout << matrix[n - 1][n - 1] << endl;
  return 0;
}
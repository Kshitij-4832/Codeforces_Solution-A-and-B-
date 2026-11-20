#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0;
  cin >> n;
  int count = 0;
  vector<int> arr(n, 0);
  bool check = true;
  int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c6 = 0;
  vector<vector<int>> matrix(n / 3, vector<int>(3, 0));
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] == 5 || arr[i] == 7) {
      check = false;
    }
    if (arr[i] == 1) {
      c1++;
    }

    if (arr[i] == 2) {
      c2++;
    }
    if (arr[i] == 3) {
      c3++;
    }
    if (arr[i] == 4) {
      c4++;
    }

    if (arr[i] == 6) {
      c6++;
    }
  }
  if (!check) {
    cout << -1 << endl;
  } else {
    int i = 0;
    while (c4 != 0 && c1 != 0 && c2 != 0) {
      c4--;
      c1--;
      c2--;
      count++;
      matrix[i][0] = 1;
      matrix[i][1] = 2;
      matrix[i][2] = 4;
      i++;
    }
    while (c1 != 0 && c2 != 0 && c6 != 0) {
      c1--;
      c2--;
      c6--;
      count++;
      matrix[i][0] = 1;
      matrix[i][1] = 2;
      matrix[i][2] = 6;
      i++;
    }
    while (c1 != 0 && c3 != 0 && c6 != 0) {
      c1--;
      c3--;
      c6--;
      count++;
      matrix[i][0] = 1;
      matrix[i][1] = 3;
      matrix[i][2] = 6;
      i++;
    }

    if (count == n / 3) {
      for (int i = 0; i < n / 3; i++) {
        for (int j = 0; j < 3; j++) {
          cout << matrix[i][j] << " ";
        }
        cout << endl;
      }
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}
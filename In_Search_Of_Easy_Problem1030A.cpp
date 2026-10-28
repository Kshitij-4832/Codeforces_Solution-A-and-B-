#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 0, sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int difficulty = 0;
    cin >> difficulty;
    sum = sum + difficulty;
  }
  if (sum == 0) {
    cout << "EASY" << endl;
  } else {
    cout << "HARD" << endl;
  }
  return 0;
}